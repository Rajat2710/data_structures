#include <iostream>
using namespace std;
void printRepeating(string s) 
{ 
	int freq[26]={0};
	cout << " Repeating characters are "; 
	for(int i = 0; i < s.length(); i++) 
	{ 
		if(freq[s[i]-'a'] == 1) 
        {
			cout << s[i] << " "; 
          freq[s[i]-'a']++;
        }
		else
			freq[s[i]-'a']++; 
	} 
  cout<<endl;
  for(int i = 0; i < s.length(); i++) 
	{
               if(freq[s[i]-'a']>0)
               {
			cout<<"frequency of "<<s[i]<<" at "<<s[i]-'a'<<" is "<<freq[s[i]-'a']<<endl;
                 freq[s[i]-'a']=0;
               }
	} 
} 
 
int main() 
{ 
  string s;
  cin>>s;
  printRepeating(s);
} 
