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
void preorder(Node *root){
        if(root!=NULL){
                cout<<root->data<<" ";
		preorder(root->next[0]);
                preorder(root->next[1]);
        }
}
void postorder(Node *root){
        if(root==NULL)
		return;
                postorder(root->next[0]);
                postorder(root->next[1]);
		cout<<root->data<<" ";
}

int main(int argc,char *argv[]){
	int n=argc-1;
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i]=atoi(argv[i+1]);
	Node *root=maketree(arr,root,0,n);
	inorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	postorder(root);
}
