#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *ptr = &n;
    cout << ptr << endl;

    ptr++;
    cout << ptr << endl; // at a memory location 4 bytes more than the previous one
}
