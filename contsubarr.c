#include <stdio.h>  

int main() 
{ 
  int n;
  scanf("%d",&n);
	int a[20];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int sum1=0,pos1=0,pos2=0;
  for(int i=0;i<n;i++)
  {
  for(int k=i;k<n;k++)
  {
    int sum=0;
    for(int j=i;j<=k;j++)
    {
     
      sum=sum+a[j];
      printf("%d ",a[j]);
    }
    printf("= %d\n",sum);
    if(sum>sum1)
    {
      sum1=sum;
      pos1=i;
      pos2=k;
    }
  }
  }
  printf("%d from %d to %d",sum1,pos1,pos2);
} 

