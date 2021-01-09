#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str; // only takes input of a single word or set of words without spaces
    string str1(5, 'n');
    cout << str1;

    string str2 = "ApniKaksha";
    cout << str2;

    string str3;

    getline(cin, str3); // takes the whole sentence as input with spaces
    cout << str3;
}