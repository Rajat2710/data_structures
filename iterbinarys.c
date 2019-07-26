
#include<stdio.h>
#include<stdlib.h>
int bs(char *a[],int l,int h,int num)
{
 while(l<=h)
 {
     int mid=l+(h-l)/2;
     if(atoi(a[mid])==num)
     return mid;
     if(num>atoi(a[mid]))
     {
         l=mid+1;
     }
     if(num<atoi(a[mid]))
     {
         h=mid-1;
     }
 }
 return -1;
}
int main(int argc,char *argv[])
{
 int l=1;
 int h=argc-1;
 int num;
 scanf("%d",&num);
 int index=bs(argv,l,h,num);
 printf("%d",index);
}

