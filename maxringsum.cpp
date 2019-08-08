#include <iostream> 
using namespace std; 
int main() 
{ int n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    cin>>a[i][j];
}
    int rs=0,cs=0,re=n-1,ce=n-1,k=0;
    int count=0,ring,rsum=0;
    while(rs<=re && cs<=ce )
    {
        int sum=0;
        for(int i=cs;i<=ce;i++)
        sum=sum+a[rs][i];
        rs++;
        for(int i=rs;i<=re;i++,k++)
        sum=sum+a[i][ce];
        ce--;
        if(rs<=re){
        for(int i=ce;i>=cs;i--,k++)
        sum=sum+a[re][i];
        re--;
        }
        if(cs<=ce)
        {
            for(int i=re;i>=rs;i--,k++)
            sum=sum+a[i][cs];
            cs++;
        }
        count++;
        if(sum>rsum)
        {
            rsum=sum;
            ring=count;
        }
    }
    cout<<"ring"<<ring<<" sum is "<<rsum;
} 
