#include <iostream> 
using namespace std; 
int main() 
{ int n;
cin>>n;
int sq=n*n;
int a[sq];
for(int i=0;i<sq;i++)
cin>>a[i];
int arr[n][n];
    int rs=0,cs=0,re=n-1,ce=n-1,k=0;
    while(rs<=re && cs<=ce )
    {
        for(int i=cs;i<=ce;i++,k++)
        arr[rs][i]=a[k];
        rs++;
        for(int i=rs;i<=re;i++,k++)
        arr[i][ce]=a[k];
        ce--;
        if(rs<=re){
        for(int i=ce;i>=cs;i--,k++)
        arr[re][i]=a[k];
        re--;
        }
        if(cs<=ce)
        {
            for(int i=re;i>=rs;i--,k++)
            arr[i][cs]=a[k];
            cs++;
        }
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    cout<<arr[i][j]<<" ";
    cout<<endl;
    }
    return 0; 
} 
