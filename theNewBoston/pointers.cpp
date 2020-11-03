#include <iostream>
using namespace std;

int main()
{
   int fish = 5;

   cout << &fish << endl; // '&' address operator 

   // a pointer is a variable that stores the memory address

    int *fishPointer;
    fishPointer = &fish;

    cout << fishPointer << endl;
}