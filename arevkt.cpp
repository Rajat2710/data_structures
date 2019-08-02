#include <iostream>
using namespace std;
void travers(int *a,int n,int sp,int k)
{
   int ep=sp+k;
    if(ep>n)
    ep=n;
    for(int i=ep-1;i>=sp;i--)
    cout<<a[i]<<" ";
    if(ep<n)
    return travers(a,n,ep,k);
    else
    return;
}
int main()
{
   int n,k;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   int sp=0;
   travers(a,n,sp,k);
}
