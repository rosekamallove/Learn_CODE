/*
Kadane's Algorithm
Array: [-1, 4, -6, 7, -4]
Current sum: -1 4 -2 7 3
Max Sum: 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];

        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    cout << maxSum << endl;
}