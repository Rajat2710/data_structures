#include<iostream>
using namespace std;
void selsort(string a)
{
	int l=a.length();
for(int i=0;i<l-1;i++)
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
}
for(int i=0;i<l;i++)
cout<<a[i];
}

int main(void)
{
        string str;
	cin>>str;
	selsort(str);
}

