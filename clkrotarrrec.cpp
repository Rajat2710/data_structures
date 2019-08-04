#include<iostream>
using namespace std;
void arrayrot(int n,int rs,int cs,int re,int ce,int **arr)
{
    if(rs<=re && cs<=ce )
    {
            int prev=arr[rs+1][cs];
                    int curr=0;
        for(int i=cs;i<=ce;i++)
        {
                curr=arr[rs][i];
        arr[rs][i]=prev;
        prev=curr;
        }
        rs++;
        for(int i=rs;i<=re;i++)
        {
                 curr=arr[i][ce];
        arr[i][ce]=prev;
        prev=curr;
        }
        ce--;
        if(rs<=re){
 for(int i=ce;i>=cs;i--)
        {
                 curr=arr[re][i];
        arr[re][i]=prev;
        prev=curr;
        }
            re--;
        }
        if(cs<=ce)
        {
                for(int i=re;i>=rs;i--)
                {
                curr=arr[i][cs];
                arr[i][cs]=prev;
                prev=curr;
                }
                cs++;
        }
    arrayrot(n,rs,cs,re,ce,arr);
    }
    else
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
cin>>arr[i][j];
}

    int rs=0,cs=0,re=0,ce=0;
    re=n-1;
    ce=n-1;
 arrayrot(n,rs,cs,re,ce,arr);
 }
