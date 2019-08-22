#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
void printList(struct Node* node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}
void search_node(struct Node** head,int num)
{
	struct Node *new_node=*head;
	int count=0;
	while(new_node->data!=num)
	{
		if(new_node->next==NULL)
		{
			printf("not found");
			return;
		}
		new_node=new_node->next;
		count++;

	}
	 printf("element found at position %d",count);
}

int main()
{
    struct Node* head = NULL;
    int n,num;
    scanf("%d",&n);
    scanf("%d",&num);
    int a[n];
    for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    push(&head, a[i]);

    puts("Created Linked List: ");
    printList(head);
    search_node(&head, num);
    return 0;
}

