#include <stdio.h>
#include<stdlib.h>
int bs(char *a[],int l,int h,int num)
{
 if(l>h)
 {
     return -1;
 }
     int mid=l+(h-l)/2;
     if(atoi(a[mid])==num)
     return mid;
     if(atoi(a[l])<=atoi(a[mid]))
     {
	     if(num>=atoi(a[l]) && num<=atoi(a[mid-1]))
         return bs(a,l,mid-1,num);
     
         return bs(a,mid+1,h,num);
     }
     if(num>=atoi(a[mid+1]) && num<=atoi(a[h]))
	     return bs(a,mid+1,h,num);
     return bs(a,l,mid-1,num);

}
int main(int argc,char *argv[])
{
    int l=1;
    int h=argc;
    int num;
    scanf("%d",&num);
int index= bs(argv,l,h,num);
if(index>0)
	printf("%d",index);
else
	printf("not present");
}


