#include<iostream>
#include<stdlib.h>
#include<stack>
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
int height(Node *root){
	if(root==NULL)
		return 0;
	else{
	int lh=height(root->next[0]);
	int rh=height(root->next[1]);
	if(lh>rh)
		return lh+1;
	else
		return rh+1;
	}
}
void printgivenlvl(Node *root,int l,bool flag){
	if(root==NULL)
		return;
	if(l==1)
		cout<<root->data<<" ";
	else if(l>1){
		if(flag==true){
		printgivenlvl(root->next[0],l-1,flag);
		printgivenlvl(root->next[1],l-1,flag);
		}
		 if(flag==false){
                printgivenlvl(root->next[1],l-1,flag);
                printgivenlvl(root->next[0],l-1,flag);
                }
	}
}
void levelorder(Node *root){
	int h=height(root);
	bool flag=true;
	for(int i=1;i<=h;i++){
		printgivenlvl(root,i,flag);
		cout<<endl;
		flag=!flag;
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
