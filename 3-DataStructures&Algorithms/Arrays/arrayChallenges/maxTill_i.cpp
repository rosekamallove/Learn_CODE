/* Geiven an array a[] of size n. for aevery i from 0 to n-1,
output max(a[0], a[1], ....., a[i]) 
Time Complexity = O(n^2)*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int Max = 0;

    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            Max = max(arr[j], arr[j + 1]);
        }
    }

    cout << Max << endl;
}

/* a better aproach
Time Complexity = O(n)*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int mx = -999999;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    cout << mx << endl;
}