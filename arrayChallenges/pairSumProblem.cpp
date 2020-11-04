#include <bits/stdc++.h>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; i++)
        {
            if (k == (arr[j] + arr[i]))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (pairsum(arr[], n, k))
    {
        cout << "Yes" << endl;
    }
    else
    {
        coout << "No" << endl;
    }
}

/*
############ Optimized Approach ############
*/

#include <bits/stdc++.h>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if ((arr[low] + arr[high]) == k)
        {
            return 1;
        }
        else if ((arr[low] + arr[high]) < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return 0;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (pairsum(arr[], n, k))
    {
        cout << "Yes" << endl;
    }
    else
    {
        coout << "No" << endl;
    }
}