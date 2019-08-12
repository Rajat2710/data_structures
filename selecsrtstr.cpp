#include<iostream>
using namespace std;
void selsort(char *a[],int n)
{
        for(int i=1;i<n;i++)
        {
                int min_i=i,j=0;
                for(int j=i;j<n;j++)
                {
                        if(*a[min_i]>*a[j])
                        {
                        min_i=j;
		// cout<<*a[min_i]<<min_i<<*a[j]<<" ";
		// cout<<endl;
                        }
                }
                char temp=*a[i];
           *a[i]=*a[min_i];
                *a[min_i]=temp;
        }
        for(int i=1;i<n;i++)
                cout<<*a[i]<<" ";
}


int main(int argc,char* argv[])
{
        selsort(argv,argc);
}

