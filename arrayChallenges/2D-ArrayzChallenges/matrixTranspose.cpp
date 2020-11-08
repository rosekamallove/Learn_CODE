/*
Challenge 1 - Matrix Transpose

Problem:
Given a square matrix A & its number of rows (or columns) N, return the
transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal,
switching the row and column indices of the matrix.

Constraints:
1 <= N <= 1000

Sample Input1:
A = [
[1,2,3],
[4,5,6],
[7,8,9]
 ]
N = 3

Sample Output1:
A = [
[1,4,7],
[2,5,8],
[3,6,9]
 ]
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                break;
            else
            {
                int old = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = old;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
