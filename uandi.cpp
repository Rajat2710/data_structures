#include <iostream> 
using namespace std; 
  
void printUnion(int *arr1, int *arr2, int m, int n) 
{ 
    int x=0,y=0,i=0,j=0;
    for( i=0;i<m-1;i++)
    {
    if(arr1[i]!=arr1[i+1])//remove duplicates from array1
    arr1[x++]=arr1[i];
    }
    arr1[x]=arr1[m-1];
    
   // ---------------------------
     for( i=0;i<n-1;i++)
     {
    if(arr2[i]!=arr2[i+1])//remove duplicates from array2
    arr2[y++]=arr2[i];
     }
    arr2[y]=arr2[n-1];
    
   // ------------------------------
    
   i = 0; 
   j = 0; 
  while (i <=x && j <= y) 
  { 
    if (arr1[i] < arr2[j]) 
       cout << arr1[i++] << " "; 
      
    else if (arr2[j] < arr1[i]) 
       cout << arr2[j++] << " "; 
      
    else
    { 
       cout << arr2[j++] << " "; 
       i++; 
    } 
  } 
  //--------------------------------------------------
  while(i <=x) 
     cout << arr1[i++] << " "; //remaining elements of array
  
  while(j <= y) 
    cout << arr2[j++] << " "; 
} 

void printinters(int *arr1, int *arr2, int m, int n) 
{
    int i = 0, j = 0; 
while (i < m && j < n) 
{ 
	if (arr1[i]<arr2[j]) 
	i++; 
	else if (arr2[j] <arr1[i]) 
	j++; 
	else
	{ 
	cout <<arr2[j] <<" "; 
	i++; 
	j++; 
	} 
} 
}
/* Driver program to test above function */
int main() 
{ 
  int m,n;
  cin>>m>>n;
  int arr1[m],arr2[n];
  for(int i=0;i<m;i++)
  cin>>arr1[i];
  for(int i=0;i<n;i++)
  cin>>arr2[i];
  printUnion(arr1, arr2, m, n); 
  printinters(arr1, arr2, m, n);
  return 0; 
} 
