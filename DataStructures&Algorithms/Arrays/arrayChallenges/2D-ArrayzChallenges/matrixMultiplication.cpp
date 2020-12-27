/*
Problem
Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix.
Constraints
1 <= n1,n2,n3 <= 1,000
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int ar[n1][n2];
    int ar2[n2][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
            cin >> ar[i][j];
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
            cin >> ar2[i][j];
    }

    int ans[n1][n3];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
            ans[i][j] = 0;
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
                ans[i][j] += ar[i][k] * ar2[k][j];
        }
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}