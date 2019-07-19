#include<stdio.h>
#include<stdlib.h>
int bsear(int s, int st, int n,char * argv[])
{
	int mid=st+(n-st)/2;
	if(st<=n)
	{
	if(atoi(argv[mid])==s)
		return mid;
	else if(atoi(argv[mid])>s)
	{
	bsear(s,st,mid-1,argv);
	}
	else
	{
		bsear(s,mid+1,n,argv);
	}
	}
	else
		return -1;
}
int main(int argc,char **argv)
{
	int s;
	int st=1;
	scanf("%d",&s);
	int ans=bsear(s,st,argc,argv);
	printf("%d",ans-1);
}

