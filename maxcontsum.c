#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int max=0,max1=0,p1=0,p2=0;
	for(int i=1;i<argc;i++)
	{
		p2++;
		max=max+atoi(argv[i]);
		if(max<=0)
		{
		max=0;
		p1=i+1;
		}
		if(max>max1)
		{
			max1=max;
			p2=i;
		}
	}
	printf("%d %d %d",max1,p1,p2);
}
