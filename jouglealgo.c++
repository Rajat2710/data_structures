#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;

    else
        return gcd(b, a % b);
}
void leftRotate(int arr[], int d, int n)
{
int gd=gcd(n,d);
	for(int i=0;i<gd;i++)
	{
		int temp=arr[i];
		int sp=i;
		while(1)
		{
			int var=sp+d;
			if(var>=n)
				var=var-n;
			if(var==i)
				break;
			arr[sp]=arr[var];
			sp=sp+d;
		}
		arr[sp]=temp;
	}
}
void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
} 
int main()
{
	int n,d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	leftRotate(arr,d,n);
    printArray(arr,n);
}
