#include <iostream>
using namespace std;

int tuna = 420; // every function has access to this variable bc it is a global variable

int main()
{
    int tuna = 69; // program is gonna use this tuna bc it is a local variable
    cout << ::tuna << endl; // this is binary scope resolution operator '::' this tells to use the global variable
    int tuna = 69; // only main can use this variable
}


