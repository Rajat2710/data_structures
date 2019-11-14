#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;
class Node{
	public:
	int data;
	Node *next[2];
};
Node *newNode(int key){
	Node *temp=new Node();
	temp->data=key;
	temp->next[0]=temp->next[1]=NULL;
	return temp;
}
Node *constructbst(int arr[],int st,int end){
	if(st>end)
		return NULL;
	int mid=(st+end)/2;
	Node *root=newNode(arr[mid]);
	root->next[0]=constructbst(arr,st,mid-1);
	root->next[1]=constructbst(arr,mid+1,end);
	return root;
}
void levelorder(Node *root){
if(root==NULL)
	return;
queue<Node *>q;
q.push(root);
while(!q.empty()){
	int count=q.size();
	while(count>0){
	Node *node=q.front();
	cout<<node->data<<" ";
	q.pop();
	if(node->next[0]!=NULL)
		q.push(node->next[0]);
	if(node->next[1]!=NULL)
		q.push(node->next[1]);
	count--;
	}
	cout<<endl;
}
}
int main(int argc,char *argv[]){
	int n=argc-1;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=atoi(argv[i+1]);
	}
	Node *root=constructbst(arr,0,n-1);
	levelorder(root);
}
		
