#include<iostream>
#include<cstring>
using namespace std; 
int main() 
{ 
    /*Initializing a C-String */
    const char *a = "Testing";  
    cout << "This is a C-String : "<< a << endl; 
  
    /* This is how std::string s is assigned 
       though a  C string ‘a’ */
    string s(a);   
     
    /* Now s is a std::string and a is a C-String */
    cout << "This is a std::string : "<< s << endl; 
    return 0; 
} 
