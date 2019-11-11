#include<iostream>
#include<stdlib.h>
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
void inorder(Node *root){
	if(root!=NULL){
		inorder(root->next[0]);
		cout<<root->data<<" ";
		inorder(root->next[1]);
	}
}
void printboundaryleft(Node *root){
	if(root==NULL)
		return;
	if(root->next[0]){
		cout<<root->data<<" ";
		printboundaryleft(root->next[0]);
	}
	else if(root->next[1]){
		cout<<root->data<<" ";
		printboundaryleft(root->next[1]);
	}
}
void printboundaryright(Node *root){
        if(root==NULL)
                return;
        if(root->next[1]){
                printboundaryright(root->next[1]);
		 cout<<root->data<<" "; 
        }
        else if(root->next[0]){
                printboundaryright(root->next[0]);
 cout<<root->data<<" "; 
        }
}
void printleaves(Node *root){
	if(root==NULL)
		return;
	printleaves(root->next[0]);
	if(!(root->next[0]) && !(root->next[1]))
		cout<<root->data<<" ";
	printleaves(root->next[1]);
}
void printboundarynodes(Node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	printboundaryleft(root->next[0]);
	printleaves(root->next[0]);
	printleaves(root->next[1]);
	printboundaryright(root->next[1]);
}
int main(int argc,char *argv[]){
	int n=argc-1;
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i]=atoi(argv[i+1]);
	Node *root=maketree(arr,root,0,n);
//	inorder(root);
	printboundarynodes(root);
}
