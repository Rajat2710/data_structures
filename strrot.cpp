# include <iostream> 
using namespace std; 
bool areRotations(string str1, string str2) 
{ 
   if (str1.length() != str2.length()) 
        return false; 
  
   string temp = str1 + str1;  
  return (temp.find(str2) != string::npos); 
} 
int main() 
{ 
   string str1,str2;
   cin>>str1>>str2;
   if (areRotations(str1, str2)) 
     printf("Strings are rotations of each other"); 
   else
      printf("Strings are not rotations of each other"); 
   return 0; 
} 
