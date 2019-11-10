#include<iostream>
#include<stdlib.h>
#include<stack>
#include<queue>
using namespace std;
class Node{
	public:
	int data;
	Node *next[2];
};
Node *newNode(int data){
	Node *node=(Node*)malloc(sizeof(Node));
	node->data=data;
	node->next[0]=node->next[1]=NULL;
	return node;
}
Node *maketree(int arr[],Node *root,int i,int n){
	if(i<n){
		Node *temp=newNode(arr[i]);
		root=temp;
		if(arr[2*i+1]!=-1)
			root->next[0]=maketree(arr,root->next[0],2*i+1,n);
		if(arr[2*i+2]!=-1)
                        root->next[1]=maketree(arr,root->next[1],2*i+2,n);
	}
	return root;
}
void levelorder(Node *root){
	if(root==NULL)
		return;
queue<Node *>q;
q.push(root);
while(q.empty()==false)
{
	Node *node=q.front();
	cout<<node->data<<" ";
	q.pop();
	if(node->next[0]!=NULL)
		q.push(node->next[0]);
	if(node->next[1]!=NULL)
		q.push(node->next[1]);
}
}
int main(int argc,char *argv[]){
	int n=argc-1;
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i]=atoi(argv[i+1]);
	Node *root=maketree(arr,root,0,n);
	levelorder(root);
}
