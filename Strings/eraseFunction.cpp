#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "nincompoop";

    s1.erase(3, 3); // str.erase(whereToStart, howManyToDelete)

    cout << s1 << endl;
}