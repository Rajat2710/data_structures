#include <iostream>

using namespace std;
void rotateboth(int n,int rs,int re,int cs,int ce,int **arr)
{
    int count=0;
    while(count<=n/2)
    {
        if(count%2==0)
        {
            int prev=arr[rs+1][cs];
            int curr=0;
            for(int i=cs;i<=ce;i++)
            {
                curr=arr[rs][i];
                arr[rs][i]=prev;
                prev=curr;
                cout<<prev<<curr<<" ";
            }
            rs++;
            cout<<endl;
            for(int i=rs;i<=re;i++)
            {
                curr=arr[i][ce];
                arr[i][ce]=prev;
                prev=curr;
                cout<<prev<<curr<<" ";
            }
            ce--;
            cout<<endl;
            if(rs<=re)
            {
            for(int i=ce;i>=cs;i--)
            {
             curr=arr[re][i];
             arr[re][i]=prev;
             prev=curr;
             cout<<prev<<curr<<" ";
            }
            re--;
            cout<<endl;
            }
            if(cs<=ce)
            {
                for(int i=re;i>=rs;i--)
                {
                    curr=arr[i][cs];
                    arr[i][cs]=prev;
                    prev=curr;
                    cout<<prev<<curr<<" ";
                }
                cs++;
                cout<<endl;
            }
            count++;
            cout<<endl;
        }
        else
        {
            int prev=arr[rs][cs+1];
            int curr=0;
            for(int i=rs;i<=re;i++)
                {
                    curr=arr[i][cs];
                    arr[i][cs]=prev;
                    prev=curr;
                    cout<<prev<<curr<<" ";
                }
                cs++;
                cout<<endl;
                for(int i=cs;i<=ce;i++)
                {
                    curr=arr[re][i];
                    arr[re][i]=prev;
                    prev=curr;
                    cout<<prev<<curr<<" ";
                }
                re--;
                cout<<endl;
                if(cs<=ce)
                {
                    for(int i=re;i>=rs;i--)
                    {
                        curr=arr[i][ce];
                        arr[i][ce]=prev;
                        prev=curr;
                        cout<<prev<<curr<<" ";
                    }
                    ce--;
                    cout<<endl;
                }
                if(rs<=re)
                {
                    for(int i=ce;i>=cs;i--)
                    {
                        curr=arr[rs][i];
                        arr[rs][i]=prev;
                        prev=curr;
                        cout<<prev<<curr<<" ";
                    }
                    rs++;
                    cout<<endl;
                }
                count++;
        }
    }
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
        cin>>arr[i][j];
    }
    int rs=0,re=n-1,cs=0,ce=n-1;
    rotateboth(n,rs,re,cs,ce,arr);
}
