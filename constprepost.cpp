#include <iostream> 
#include<stdlib.h>
using namespace std; 

class node 
{ 
	public: 
	int data; 
	node *left; 
	node *right; 
}; 

node* newNode (int data) 
{ 
	node* temp = new node(); 

	temp->data = data; 
	temp->left = temp->right = NULL; 

	return temp; 
} 


node *constructTree (int pre[], int post[],int st,int end, int size) 
{ 
	static int preIndex = 0; 
	 
	if (preIndex >= size || st > end) 
		return NULL; 

	
	node* root = newNode ( pre[preIndex] ); 
	++preIndex; 

	
	if (st == end) 
		return root; 

	int i; 
	for (i = st; i <= end; ++i) 
		if (pre[preIndex] == post[i]) 
			break; 


	if (i <= end) 
	{ 
		root->left = constructTree (pre, post,st, i, size); 
		root->right = constructTree (pre, post,i + 1, end, size); 
	} 
return root; 
} 


void inorder (node* node) 
{ 
	if (node == NULL) 
		return; 
	inorder(node->left); 
	cout<<node->data<<" "; 
	inorder(node->right); 
} 

int main(int argc,char *argv[]){
	/*string s1=argv[1];
	string s2=argv[2];
	int l1=s1.length();
	int l2=s2.length();
	int pre[l1];
	int post[l2];
	for(int i=0;i<l1;i++)
		pre[i]=atoi(s1[i]);
	for(int i=0;i<l2;i++)
		post[i]=atoi(s2[i]);
	node *root=constructTree(pre,post,0,l1-1,l1);
	inorder(root);*/
	int pre[] = {1, 2, 4, 8, 9, 5, 3, 6, 7}; 
	int post[] = {8, 9, 4, 5, 2, 6, 7, 3, 1}; 
	int size = sizeof( pre ) / sizeof( pre[0] ); 

	node *root = constructTree(pre, post,0,size-1,size); 

	cout<<"Inorder traversal of the constructed tree: \n"; 
	inorder(root); 

	return 0; 
}
