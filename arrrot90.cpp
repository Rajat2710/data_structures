#include<iostream>
#include<stdlib.h>
using namespace std;
int main(void)
{
int n;
scanf("%d",&n);
int a[n][n];
for(int i=0;i<n;i++)
{
        for(int j=0;j<n;j++)
        cin>>a[i][j];
}
for(int i=0;i<n;i++)
{
        for(int j=i;j<n;j++)
	{
                int temp=a[j][i];
        a[j][i]=a[i][j];
        a[i][j]=temp;
	}
}
for(int i=0;i<n/2;i++)
{
	for(int j=0;j<n/2;j++)
	{
		int temp=a[i][j];
		a[i][j]=a[n-1-i][j];
		a[n-1-i][j]=temp;
	}
}
for(int i=0;i<n;i++)
{
        for(int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
}
}

