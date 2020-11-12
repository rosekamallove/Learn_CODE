#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;

    return;
}

int main()
{
    int a = 2;
    int b = 4;

    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr); // or we can send the variable's address by the &operater
    cout << a << " " << b << endl;
}