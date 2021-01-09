/*
Problem:

Isyana is given the number of visitors at her local theme park on N consecutive
days. The number of visitors on the i-th day is V i . A day is record breaking if it
satisfies both of the following conditions:

● The number of visitors on the day is strictly larger than the number of
visitors on each of the previous days.

● Either it is the last day, or the number of visitors on the day is strictly larger
than the number of visitors on the following day.

Note that the very first day could be a record breaking day!


Please help Isyana find out the number of record breaking days.

Input:

The first line of the input gives the number of test cases, T . T test cases follow.
Each test case begins with a line containing the integer N . The second line
contains N integers. The i-th integer is V i .

Output:

For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the number of record breaking days.

Constraints:

Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
0 ≤ V i ≤ 2 × 10 5 .
Test set 1
1 ≤ N ≤ 1000.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int counter = 0; // no of record breakers
        // int i;           // iterator
        // int visitors = arr[i];
        int prb;

        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[j] > arr[i])
                {
                    counter++;
                }
                else if (arr[i] > arr[j])
                {
                    counter++;
                }
            }
        }

        cout << counter << endl;
    }
}

/* 
The above approach will give us TLE bcz its time complexity is O(n^2)
which will exceed the time limit hence the optimmized approach is below

The above fkin code is wrong too!!

Optimised Approach:

Intuition: If we can optimise step (1), then we can optimise our overall solution.
For step (1): We need to check if a[i] > { a[i-1], a[i-2],..., a[0] }, which is same as
a[i] > max(a[i-1], a[i-2],..., a[0])

For this, we will keep a variable mx, which will store the maximum value till a[i].
Then we just need to check,
a[i] > mx
a[i] > a[i+1] , { if i+1 < n }
and update mx, mx = max(mx, a[i])

So step (1) time complexity reduces to O(1).
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n + 1];
    arr[n] = -1;
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    cout << mx << endl;
}