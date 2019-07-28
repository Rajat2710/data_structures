#include <stdio.h>
#include<stdlib.h>
int pv(int argc,char *a[])
{
    for(int i=1;i<=argc/2;i++)
    {
        if(atoi(a[i])>atoi(a[i+1]))
        return i;
        if(atoi(a[argc-i])<atoi(a[argc-i-1]))
        return argc-i-1;
    }
}
int bs(char *a[],int l,int h,int num)
{
 if(l>h)
 {
     return -1;
 }
     int mid=l+(h-l)/2;
     if(atoi(a[mid])==num)
     {
     return mid;
     }
     if(num>atoi(a[l]))
         return bs(a,l,mid-1,num);
     else
	     return bs(a,mid+1,h,num);

}
int main(int argc,char *argv[])
{
    int l=1;
    int h=argc;
    int i1=0,i2=0;
 int pivot=pv(argc,argv);
 int num;
 scanf("%d",&num);
 if(atoi(argv[pivot])==num)
 printf("%d",pivot);
 if(num>=atoi(argv[0]))
     i1=bs(argv,l,pivot-1,num);
     i2=bs(argv,pivot+1,h,num);
     if(i1>0)
     printf("%d",i1);
     else
     printf("%d",i2);
}
