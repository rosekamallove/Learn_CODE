#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "windowsSucksssssssss";
    string str = s1.substr(6, 4); // str.substr(indexToStart, noOfElements)
    cout << str << endl;
}