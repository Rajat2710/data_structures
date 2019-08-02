#include<iostream>
#include<cstring>
using namespace std; 
int main() 
{ 
    char dest[50] = "This is an"; 
    char src[50] = " example"; 
  
    strcat(dest, src); //only for char type strings
    cout << dest<<endl;

//----------------------------------------------------------------------------

   char ch = 'p'; 
    char* val; 
  
    // Use of strrchr() 
    // returns "ks" 
    val = strrchr(dest, ch); //give pointer to the last character in string
  
    printf("String after last %c is :  %s \n", 
           ch, val); 

//-----------------------------------------------------------------------------

 char str3[40];
strcpy(str3,dest);
cout<<"copy dest to str3   "<<str3;

//------------------------------------------------------------------------------


cout<<"length of string str3 is "<<strlen(str3);

//-----------------------------------------------------------------------------

strcat(str3,src);
cout<<"str3 after catenation with src 3 characters  "<<str3;//catenation of n ch at last of string

//------------------------------------------------------------------------------

// Take any two strings 
	char s1[10] = "aksh"; 
	char s2[10] = "akash"; 

	// Compare strings using strncmp() 
	int result = strncmp(s1, s2, 4); 

	if (result == 0) { 
		// num is the 3rd parameter 
		// of strncmp() function 
		printf("str1 is equal to str2 upto num characters\n"); 
	} 
	else if (result > 0) 
		printf("str1 is greater than str2\n"); 
	else
		printf("str2 is greater than str1\n"); 

	printf("Value returned by strncmp() is: %d", 
		result); 

//-----------------------------------------------------------------------------	

//function on string type
//
//compare
//find--find the first occurence of string
//rfind--find the last occurence of string
//insert --ins string at any pos for ex--str.insert(8,"Geeks")
//clear--clear the whole string
//empty--check string is empty or not

   return 0; 
}
