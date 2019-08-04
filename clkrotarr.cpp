#include<iostream> 
using namespace std; 
int main() 
{ int r,c,k;
cin>>r>>c>>k;
int arr[r][c];
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
cin>>arr[i][j];
}
for(int m=0;m<k;m++)
{
    int rs=0,cs=0,re=r-1,ce=c-1;
    while(rs<=re && cs<=ce )
    {
	    int prev=arr[rs+1][cs], curr=0;
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
    }
}
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
} 
}
