#include <stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int lc(int *a,int n)
{
    int rem=a[0];
    for(int i=0;i<n;i++)
    {
        rem=(a[i]*rem)/gcd(a[i],rem);
    }
    return rem;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int lcm=lc(a,n);
    printf("%d",lcm);
}
