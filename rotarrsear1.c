
#include <stdio.h>
int searc(int *a,int l,int h,int num)
{
    if(l>h)
    return -1;
    int mid=l+(h-l)/2;
    if(a[mid]==num)
    return mid;
    else if(num<a[mid])
    return searc(a,l,mid-1,num);
    else
    return searc(a,mid+1,h,num);
}
int pv(int n,int *a)
{
    for(int i=0;i<n/2;i++)
    {
        if(a[i]>a[i+1])
        return i;
        if(a[n-1-i]<a[n-1-i-1])
        return n-1-i-1;
    }
}
int main()
{
    int n,num,l=0;
    scanf("%d %d",&n,&num);
    int a[n];
    int h=n-1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pivot=pv(n,a);
    if(num==a[pivot])
    printf("%d",pivot);
    else if(num>=a[0])
    {
    int pos=searc(a,l,pivot-1,num);
    printf("%d",pos);
    }
    else
    {
    int pos=searc(a,pivot+1,h,num);
    printf("%d",pos);
    }
}

