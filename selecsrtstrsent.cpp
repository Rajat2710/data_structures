#include<iostream>
#include<cstring>
using namespace std;
void selsort(char *a[],int n)
{
/*	cout<<*a[1]<<endl<<*a[2]<<endl;
	cout<<a[2]<<endl;
	cout<<a[1][2]<<endl;*/
        for(int i=1;i<n;i++)
        {
                int min_i=i,j=0;
                for(int j=i;j<n;j++)
                {
                        if(strcmp(a[min_i],a[j])>0)
                        {
                        min_i=j;
                        }
                }
                char *temp=a[i];
           a[i]=a[min_i];
                a[min_i]=temp;
        }
        for(int i=1;i<n;i++)
                cout<<a[i]<<" ";
}


int main(int argc,char* argv[])
{
        selsort(argv,argc);
}

