#include <iostream> 
using namespace std; 
int main() 
{ int r,c;
cin>>r>>c;
int arr[r][c];
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
cin>>arr[i][j];
}

    int rs=0,cs=0,re=r-1,ce=c-1;
    while(rs<=re && cs<=ce )
    {
        for(int i=cs;i<=ce;i++)
        cout<<arr[rs][i]<<" ";
        rs++;
        for(int i=rs;i<=re;i++)
        cout<<arr[i][ce]<<" ";
        ce--;
        if(rs<=re){
        for(int i=ce;i>=cs;i--)
        cout<<arr[re][i]<<" ";
        re--;
        }
        if(cs<=ce)
        {
            for(int i=re;i>=rs;i--)
            cout<<arr[i][cs]<<" ";
            cs++;
        }
    }
    return 0; 
} 
