#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    return (n && !(n & (n - 1)));
}
int main()
{
    int number;
    cin >> number;
    cout << isPowerOfTwo(number) << endl;
}