#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void append(struct Node** head,int new_data)
{
	struct Node* new_node= (struct Node*) malloc(sizeof(struct Node));
	struct Node *last=*head;
	new_node->data=new_data;
	new_node->next=NULL;

	if(*head==NULL)
	{
		*head=new_node;
		return;
	}
	while(last->next!=NULL)
		last=last->next;
	last->next=new_node;
	return;
}

void push(struct Node** head,int new_data)
{
	struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next=*head;
	*head=new_node;
	return;
}

void insertAfter(struct Node* prev_n,int new_data)
{
	if(prev_n==NULL)
		return;
	struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next=prev_n->next;
	prev_n->next=new_node;
	return;
}

void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
  printf("\n");
}

int main() {
	struct Node* head=NULL;
	append(&head, 6);
	printList(head);
  push(&head, 7);
  printList(head);
  push(&head, 1);
  printList(head);
  append(&head, 4);
  printList(head);
  insertAfter(head->next, 8);
  printList(head);

  printf("\n Created Linked list is: ");
  printList(head);

  return 0;
}
