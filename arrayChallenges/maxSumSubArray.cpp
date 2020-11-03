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

    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
                // cout << sum << endl;
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
}

/*
Cumulative Sum Approach:
Array = [1-,4,7,2]
Coomulative Array = [-1, 3, 10, 12]
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

    int currSum[n + 1];
    currSum[0] = 0;

    for (int i = 1; i < n; i++)
    {
        currSum[i] = currSum[i - 1] + arr[i - 1];
    }
    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
    }
    cout << maxSum;
}