

#include <stdio.h>
#include<string.h>
int main()
{
    char a[10];
    gets(a);
    int l=strlen(a);
    printf("%d\n",l);
    strcat(a,a);
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        printf("%c ",a[i+j]);
        printf("\n");
    }
}

