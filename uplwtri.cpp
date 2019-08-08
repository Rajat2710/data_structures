#include <iostream>

using namespace std;
void printupper(int **arr,int n)
{
    cout<<"Upper triangle"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j)
            cout<<"0"<<" ";
            else
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printlower(int **arr,int n)
{
     cout<<"Lower Triangle"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            cout<<"0"<<" ";
            else
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
     printupper(arr,n);
     printlower(arr,n);
}
