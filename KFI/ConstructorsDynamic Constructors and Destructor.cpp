This snippet highlights the use of a destructor to release dynamically allocated memory
.
#include <iostream>
#include <string.h>
using namespace std;
class String{
    char *name;
    int length;
public:
    String() //Constructor-01
    {
        length = 0;
        name = new char[ length + 1 ];
    }
    String(char *s) //Constructor-02
    {
        length = strlen(s);
        name = new char[ length + 1 ]; //one additional for \0
        strcpy(name, s);
    }
    ~String() //Destructor-02
    {
        delete [] name;
    }
};
