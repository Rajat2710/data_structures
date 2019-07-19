#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[]={1,2,3,4,5,'\0'};
	int *p=a;
	while(*p !='\0')
	{
		printf("%d",*p);
		p++;
	}
}

