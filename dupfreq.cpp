#include <iostream>
using namespace std;
void printRepeating(int arr[], int size) 
{ 
	int count[size]={0};
	int i; 
		
	cout << " Repeating elements are "; 
	for(i = 0; i < size; i++) 
	{ 
		if(count[arr[i]] == 1) 
        {
			cout << arr[i] << " "; 
          count[arr[i]]++;
        }
		else
			count[arr[i]]++; 
	} 
  cout<<endl;
  for(i = 0; i < size; i++) 
	{
               if(count[arr[i]]>0)
               {
			cout<<"frequency of "<<arr[i]<<" is "<<count[arr[i]]<<endl;
                 count[arr[i]]=0;
               }
	} 
} 


int main() 
{ 
  int n;
  scanf("%d",&n);
	int arr[n];
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
	printRepeating(arr,n); 
	return 0; 
} 
