#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "nincompoop";
    cout << s1.find("poo") << endl;

    s1.insert(2, "lol"); // str.insert(index, string)

    cout << s1 << endl;

    cout << s1.size() << endl;
    cout << s1.length() << endl;

    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << endl;
    }
}