#include<iostream> 
#include<cstring>
using namespace std; 
int main() 
{ 
    char str[100];
    cin>>str;
    cout << "Max occurring character is ";
    
    int count[26] = {0}; 
    int len = std::strlen(str);
    int max = 0;   
    char result;   
    for (int i = 0; i < len; i++) { 
        count[str[i]-'a']++; 
        if (max < count[str[i]-'a']) { 
            max = count[str[i]-'a']; 
            result = str[i]; 
        } 
    } 
    cout<<result<<max;
} 
