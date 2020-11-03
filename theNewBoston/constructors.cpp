// a constructor is a function that gets called automatically when an object is called

#include <iostream>
#include <string>
using namespace std;

class MyClass
{
    public:
        // a constructor does not use a return type and the name of the constructoe is exact same as the class 
        MyClass(string z)
        {
            cout << "this will get printed automagically" << endl;
            setName(z);
        }
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
    MyClass mo("Lucky Bucky Roberts"); // as soon as we created this object the constructor get called automatically
    cout << mo.getName();

    MyClass mo2("Jesse Pinkmen")
    cout << mo2.getName() << endl; // each object has its own set of variables
    return 0;
}

