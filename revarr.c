#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	int arr[argc];
	for(int i=argc-1;i>=1;i--)
	{
		arr[i]=atoi(argv[i]);
		printf("%d ",arr[i]);
	}
}
