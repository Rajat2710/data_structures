#include<iostream>
#include<array>
using namespace std;
int main(void)
{//at,get for printing
    array<int,6> arr={1,2,3,4,5,6};
    for( int i=0;i<6;i++)
    cout<<arr.at(i)<<" ";
    cout<<endl;
    cout<<get<0>(arr)<<" ";
    cout<<arr[1]<<" ";
    //front for first elemnt
    //back for last element
    cout<<arr.front()<<" ";
    cout<<arr.back()<<" ";
    //size is no of elemnets array contain
    //max_size is size of declaration of array or max no of elements array can contain
    cout<<arr.size()<<" ";
    cout<<arr.max_size()<<" ";
    //swap for swapping two arrays
     array<int,6> arr2={7,8,9,10,11,12};
     array<int,6> arr1={1,2,3,4,5,6};
     arr1.swap(arr2);
    //empty to check whether array is empty or not
    //fill to fill elements with specific values
     arr1.empty();
     arr2.fill(4);
     cout<<endl;
     for(int i=0;i<6;i++)
      cout<<arr2[i]<<" ";
}
