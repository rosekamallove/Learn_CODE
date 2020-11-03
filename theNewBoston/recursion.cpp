// recursion is the idea tha a function can call itself
#include <iostream>
using namespace std;

int factorial(int x)
{
    if(x==1 && x==0)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}

int main()
{
    int b;
    cout << "Enter the number you wanna find out the factorial of: ";
    cin >> b;
    cout << "The factorial is: " << factorial(b) << endl;
}