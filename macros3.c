#include<stdio.h>
#include<stdlib.h>
#define combine(a,b) a##b
int main()
{
	printf("concat string is %d",combine(12,34));
}
