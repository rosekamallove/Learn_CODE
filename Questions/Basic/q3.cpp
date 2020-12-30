// Find the maximum and minimum element in an array

#include <bits/stdc++.h>
using namespace std;

void maxInArray(int arr[], int n);
void minInArray(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    maxInArray(arr, n);
    minInArray(arr, n);
}

void maxInArray(int arr[], int n)
{
    int maxNum = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxNum = max(maxNum, arr[i]);
    }
    cout << "Max : " << maxNum << endl;
}
void minInArray(int arr[], int n)
{
    int minNum = arr[0];
    for (int i = 1; i < n; i++)
    {
        minNum = min(minNum, arr[i]);
    }

    cout << "Min : " << minNum << endl;
}
