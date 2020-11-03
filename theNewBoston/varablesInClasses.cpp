// the wrong way... why?
// because making a class public makes your program really easy to mess up
#include <iostream>
#include <string>
using namespace std;

class MyClass
{
    public:
        string name;
};

int main ()
{
    MyClass mo;
    mo.name = "Rose Kamal";
    cout << mo.name << endl;
    return 0;
}

// The Correct Way...
#include <iostream>
#include <string>
using namespace std;

class MyClass
{
    public:
        void setName(string x) // we made this function to set the variable name
        { 
            name = x;
        }
        string getName() // we made this function to get the name variable as output or any other shit
        {
            return name;
        }
    private:
        string name;
};

int main ()
{
    MyClass mo;
    mo.setName("Rose Kamal");
    cout << mo.getName() << endl;
    return 0;
}