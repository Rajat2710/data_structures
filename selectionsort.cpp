#include<iostream>
using namespace std;
void selsort(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		int min_i=i,j=0;
		for(int j=i;j<n;j++)
		{
			if(a[min_i]>a[j])
			{
			min_i=j;
			}
		}
		int temp=a[i];
		a[i]=a[min_i];
		a[min_i]=temp;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}


int main()
{
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	selsort(a,n);
}
