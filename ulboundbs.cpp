#include<iostream>
using namespace std;


int lowerBound(int *a,int n,int num){
    int s=0,e=n-1;
    int ans=-1;

    while(s<=e){
        int mid=(s+e)/2;

        if(a[mid]==num){
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]>num){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return ans;
}

int upperBound(int *a,int n,int num){
    int s=0,e=n-1;
    int ans=-1;

    while(s<=e){
        int mid=(s+e)/2;

        if(a[mid]==num){
            ans = mid;
            s = mid+1;
        }
        else if(a[mid]>num){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return ans;
}

int main(){
    int n,num;
    cin>>n>>num;
    int *a=new int[n];
    for(int i=0;i<n;i++)
	    cin>>a[i];
    cout<<lowerBound(a,n,num)<<endl;
    cout<<upperBound(a,n,num)<<endl;
return 0;
}
