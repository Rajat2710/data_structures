#include<stdio.h>
#include<stdlib.h>
 inline int square(int x) {return x*x;}
int main()
{
        int i=36/square(6);
	printf("%d",i);
	return 0;
}


