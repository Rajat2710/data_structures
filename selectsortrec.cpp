#include<iostream>
using namespace std;
void selsort(string a,int i)
{
        int l=a.length();
	if(i<l-1)
	{
        int min_i=i;
        for(int j=i+1;j<l;j++)
        {
                if(a[min_i]>a[j])
                {
                min_i=j;
                }
        }
          int temp=a[i];
                a[i]=a[min_i];
                a[min_i]=temp;
		selsort(a,i+1);
	}
	else
	{
		for(int k=0;k<l;k++)
		cout<<a[k];
	}

}

int main(void)
{
        string str;
        cin>>str;
        selsort(str,0);
}

