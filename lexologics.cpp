#include<iostream>
#include<set>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int num;
    cin>>str;
    cin>>num;
    int l=str.length();
    set<string> lexogicalstr;
    str=str+str;
    for(int i=0;i<l;i++)
    {
        lexogicalstr.insert(str.substr(i,num));
      
    }
   while(!lexogicalstr.empty())
    {
        cout<<*lexogicalstr.begin()<<"  ";
        lexogicalstr.erase(lexogicalstr.begin());
    }
}
