#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=1;i<n;i++)
	{
		int val=a[i];
		int index=i;
		while(index>0 && a[index-1]>val)
		{
	a[index]=a[index-1];
	index=index-1;
		}
		a[index]=val;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
