#include<iostream>
using namespace std;
int main()
{
    /* std::string initialized */
    string s = "Testing";
    cout << "This is a std::string : "<< s << endl;

    // c_str returns null terminated array of characters
    const char *a = s.c_str(); //a doen't contain null character

    /* Now 'a' has address of starting character
      of string */
    printf("%s\n", a);
    return 0;
}
