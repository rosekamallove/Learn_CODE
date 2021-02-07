#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "3412341234123";

    sort(s.begin(), s.end(), greater<int>());

    cout << s << endl;
}
