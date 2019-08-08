#include <iostream>
using namespace std;
/*void swapcol(int n,int **arr)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[n-1-i][j];
            arr[n-1-i][j]=temp;
        }
    }
}
void swaprow(int n,int **arr)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][n-1-j];
            arr[i][n-1-j]=temp;
        }
    }
}
void printarr(int n,int **arr)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
void rotate180deg(int n,int **arr)
{
     swapcol(n,arr);
     swaprow(n,arr);
}*/
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
     //coloumn swap
     
     for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[n-1-i][j];
            arr[n-1-i][j]=temp;
        }
    }
    
    //row swap
    
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp=arr[j][i];
            arr[j][i]=arr[j][n-1-i];
            arr[j][n-1-i]=temp;
        }
    }
    
    //print
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    
}
