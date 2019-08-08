#include <iostream>

using namespace std;
void swapdiag(int **arr,int n)
{//method1
  /*  for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                int temp=arr[i][j];
                arr[i][j]=arr[i][n-1-i];
                arr[i][n-1-i]=temp;
            }
        }
    }*/
    //method2
   for(int i=0;i<n;i++)
    {
        int temp=arr[i][i];
        arr[i][i]=arr[i][n-1-i];
        arr[i][n-1-i]=temp;
    }
}
void printarr(int **arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n; 
    cin>>n;
    int **arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    swapdiag(arr,n);
    printarr(arr,n);
}
