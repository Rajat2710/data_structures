#include <iostream> 
using namespace std; 
  
void stableSelectionSort(int a[], int n) 
{ 
    for (int i = 0; i < n - 1; i++)  
     { 
        int min = i; 
        for (int j = i + 1; j < n; j++) 
            if (a[min] > a[j]) 
                min = j; 
   
        int key = a[min]; 
        while (min > i)  
        { 
            a[min] = a[min - 1]; 
            min--; 
        } 
        a[i] = key; 
    } 
} 
void printArray(int a[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << a[i] << " "; 
    cout << endl; 
} 
int main()	
{  
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
    stableSelectionSort(a, n); 
    printArray(a, n); 
    return 0; 
} 
