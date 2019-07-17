#include<stdio.h>
#include<stdlib.h>
void rev(int *arr,int n)
{
        if(n==0)
        {
                return;
       }
        else
        {
                printf("%d ",arr[n]);
                rev(arr,n-1);
        }
}
int  main(int argc,char **argv)
{
	int arr[argc];
	for(int i=argc-1;i>=1;i--)
	{
		arr[i]=atoi(argv[i]);
	}
	int n=argc-1;
	rev(arr,n);
}
