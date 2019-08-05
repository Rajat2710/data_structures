
#include<iostream>
#include<string> /* This header contains string class */
using namespace std;
int main()
{
	/* std::string initialized */
	string s = "Testing";
	cout << "This is a std::string : "<< s << endl;

	/* Address of first character of std::string is
	stored to char pointer a */
	char *a = &(s[0]); //a includes null character also

	/* Now 'a' has address of starting character
	of string */
	printf("%s\n", a);
       return 0;
}       
