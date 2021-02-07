#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, s;
    cin >> n >> m >> x;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << endl;
                flag = 1;
            }
        }
    }

    if (flag)
    {
        cout << "Element Found!\n";
    }
    else
    {
        cout << "Element Not found!\n";
    }
}