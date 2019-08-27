
#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void printArray(int arr[], int size)
{
    int i; 
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int partition(int *arr,int low,int high) {
        srand(time(NULL));
    int random = low + rand() % (high-low);
    swap(arr[random], arr[low]); 
	   int pivot = arr[low];
	int i = low, j = high-1;

	while (true) {
		 while (arr[i] < pivot)
           i++;
		 while (arr[j] > pivot)
           j--;
		if (i >= j)
			return j;

		swap(arr[i], arr[j]);
}
}
void quicksort(int *arr,int low,int high) {
        if(low<high-1) {
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

