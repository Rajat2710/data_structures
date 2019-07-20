#include<stdio.h>
#include<stdlib.h>
void rotate(int n,int r,int a[])
{
        int arr[r],z=0;
        for(int j=n-r;j<n;j++)
        {
        arr[z]=a[j];
        z++;
        }
        for(int i=n-r-1;i>=0;i--)
        {
                a[i+r]=a[i];
        }
        for(int i=0;i<r;i++)
        {
                a[i]=arr[i];
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

