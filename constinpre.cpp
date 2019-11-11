#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;
class Node{
	public:
	char data;
	Node *next[2];
};
Node* newNode(char data)
{
    Node* node = new Node();
    node->data = data;
    node->next[0] = NULL;
    node->next[1] = NULL;

    return (node);
}

int search(string in,int st,int en,int key){
	for(int i=st;i<=en;i++){
		if(in[i]==key)
			return i;
	}
}

Node * constructtree(string in,string pre,int st,int en){
static int i_pre=0;
if(st>en)
	return NULL;
Node *prerootnode=newNode(pre[i_pre++]);
if(st==en)
	return prerootnode;
int inindex=search(in,st,en,prerootnode->data);
prerootnode->next[0]=constructtree(in,pre,st,inindex-1);
prerootnode->next[1]=constructtree(in,pre,inindex+1,en);
return prerootnode;
}

void printinorder(Node *node){
	if(node==NULL)
		return;
	printinorder(node->next[0]);
	cout<<node->data<<" ";
	printinorder(node->next[1]);
}

int main(int argc,char *argv[]){
	string in=argv[1];
	string pre=argv[2];
	int l=in.length();
	Node *root=constructtree(in,pre,0,l-1);
	printinorder(root);
}
