#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int max=0,lar=0;
	for(int i=1;i<argc;i++)
	{
		if(atoi(argv[i])>max)
			max=atoi(argv[i]);
	
	}
	for(int i=1;i<=max;i++)
	{
		int c=0;
		for(int j=1;j<argc;j++)
		{
			
			if(atoi(argv[j])%i==0)
				c++;
		}
		if(c==argc-1)
			lar=i;
	}
	printf("%d",lar);
}
