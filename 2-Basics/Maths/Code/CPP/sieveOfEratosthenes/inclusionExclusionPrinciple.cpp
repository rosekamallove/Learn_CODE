/*
How many numbers between 1 and 100 are divisible by
5 or 7
*/

#include <iostream>
using namespace std;

int divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;

    int c2 = n / (a * b);
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    cout << divisible(n, a, b);
}