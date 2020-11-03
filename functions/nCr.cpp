#include<iostream>
using namespace std;

int fact(int x)
{
    int factorial=1;
     
    for (int i=2; i<=x; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}

int main()
{
    int n,r;
    cout << "enter n and r respectively" << endl;
    cin >> n >> r;

    // int a = fact(n);
    // int b = fact(n-r);
    // int c = fact(r);

    int d = fact(n)/(fact(r)*fact(n-r));

    cout << d << endl;
}