This program uses a global variable and a destructor to track the number of objects currently in existence as they enter and leave different scopes
.
#include <iostream>
using namespace std;

int count = 0;

class Alpha{
    public:
    Alpha() //Constructor
    {
        count++;
        cout << "\nNo. of object created " << count;
    }
    ~Alpha() //Destructor
    {
        cout << "\nNo. of object destroyed " << count;
        count--;
    }
};

int main()
{
    cout << "\n\nENTER MAIN\n";
    Alpha A1, A2, A3, A4;
    {
        cout << "\n\nENTER BLOCK1\n";
        Alpha A5;
    }

    {
        cout << "\n\nENTER BLOCK2\n";
        Alpha A6;
    }
    cout << "\n\nnRE-ENTER MAIN\n";

    return 0;
}
