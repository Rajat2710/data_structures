#include <stdio.h>
#include<stdlib.h>
int bs(char *argv[],int l,int h,int num)
{
 if(l>h)
 {
     return -1;
 }
     int mid=l+(h-l)/2;
     if(atoi(argv[mid])==num)
     return mid;
     if(num>atoi(argv[mid]))
     {
         return bs(argv,mid+1,h,num);
     }
     if(num<atoi(argv[mid]))
     {
         return bs(argv,l,mid-1,num);
     }
}
int main(int argc,char *argv[])
{
	//time complexity o(log n)
 int l=1;
 int h=argc-1;
 int num;
 scanf("%d",&num);
 int index=bs(argv,l,h,num);
 printf("%d",index);
}


