#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}
void deleteNode(struct Node** head,int pos)
{
        struct Node* new_node=*head;
        struct Node* prev=NULL;
	if(pos==0)
	{
		*head=new_node->next;
		free(new_node);
		return;
	}
	for(int i=0; new_node!=NULL&&i<pos;i++)
	{
		prev=new_node;
		new_node=new_node->next;
	}
	if(prev->next==NULL || new_node==NULL)
		return;
	prev->next=new_node->next;
	free(new_node);
}


int main()
{
    struct Node* head = NULL;
    int n,pos;
    scanf("%d",&n);
    scanf("%d",&pos);
    int a[n];
    for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    push(&head, a[i]);

    puts("Created Linked List: ");
    printList(head);
    deleteNode(&head, pos);
    puts("\nLinked List after Deletion ");
    printList(head);
    return 0;
}

