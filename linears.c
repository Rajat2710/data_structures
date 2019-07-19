#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<argc;i++)
	{
		if(atoi(argv[i])==n)
		{
			printf("%d is at position %d",n,i-1);
		       break;
		}
	}
}	
