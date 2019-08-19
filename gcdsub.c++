#include <bits/stdc++.h> 
using namespace std; 
int gcd(int a, int b) 
{ 
	if (a == b) 
		return a;
  if(a>b)
	return gcd(a-b,b);
  else
    return gcd(a,b-a);
} 
int main() 
{ 
	int a,b;
	cin>>a>>b;
	int gd=gcd(a,b);
	cout<<gd;
} 
