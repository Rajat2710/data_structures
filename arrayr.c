#include<stdio.h>
#include<stdlib.h>
void rotate(int n,int r,int a[])
{
        for(int j=0;j<r;j++)
        {
        int last=a[n-1];
        for(int i=0;i<n-1;i++)
        {
                a[n-1-i]=a[n-1-i-1];
        }
        a[0]=last;
        }
        for(int i=0;i<n;i++)
        {
                printf("%d ",a[i]);
        }
}

int main()
{
        int n,r;
        scanf("%d %d",&n,&r);
        int a[20];
        for(int i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        rotate(n,r,a);
}
