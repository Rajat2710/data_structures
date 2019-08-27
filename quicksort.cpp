#include<iostream>
#include<stdlib.h>
using namespace std;
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
int partition(int *arr,int low,int high) {
	int last=arr[high-1];
	int i=low;
	for(int j=low;j<high;j++) {
		if(arr[j]<last) {
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
		}
	}
	int temp=arr[i];
	arr[i]=arr[high-1];
	arr[high-1]=temp;
	return i;
}
void quicksort(int *arr,int low,int high) {
	if(low<high) {
		int pivot_ind=partition(arr,low,high);

			quicksort(arr,low,pivot_ind);
		quicksort(arr,pivot_ind+1,high);
	}
}
int main(int argc,char *argv[])
{
	int arr[argc-1];
	for(int i=1;i<argc;i++)
	arr[i-1]=atoi(argv[i]);
	int low=0;
	int high=argc-1;
	printArray(arr,argc-1);
	quicksort(arr,low,high);
	printArray(arr,argc-1);
}
