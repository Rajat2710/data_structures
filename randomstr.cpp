// CPP Program to generate random alphabets 
#include <iostream> 
using namespace std; 

const int MAX = 26; 
string printRandomString(int n) 
{ 
	char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
						'h', 'i', 'j', 'k', 'l', 'm', 'n', 
						'o', 'p', 'q', 'r', 's', 't', 'u', 
						'v', 'w', 'x', 'y', 'z' }; 

	string res = ""; 
	for (int i = 0; i < n; i++) 
		res = res + alphabet[rand() % MAX]; 
	
	return res; 
} 
int main() 
{ 
srand(time(NULL)); 
int n;
cin>>n;
cout << printRandomString(n); 
return 0; 
} 


//alphanumeric
/*
void gen_random(char *s, const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    s[len] = 0;
}



//real soln

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

char genRandom()
{

    return alphanum[rand() % stringLength];
}

int main()
{
    srand(time(0));
    std::string Str;
    for(unsigned int i = 0; i < 20; ++i)
    {
    Str += genRandom();

    }
    cout << Str << endl;
    


}

    return 0;

}


//simple form

#include <iostream>
using namespace std;

#include <stdlib.h>
#include <time.h>

int main()
{	
	char alphabets[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char rString[20];

	srand(time(NULL));

	int i=0;
	while(i<20) {
		int temp = rand() % 26;
		rString[i] = alphabets[temp];
		i++;
	}

	for(i=0; i<20; i++)
		cout<<rString[i];

	return 0;
}*/
