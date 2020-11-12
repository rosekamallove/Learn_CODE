#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "abc";

    cout << s2.compare(s1) << endl;

    if ((s1.compare(s2)) == 0)
    {
        cout << "strings are equal\n";
    }
}