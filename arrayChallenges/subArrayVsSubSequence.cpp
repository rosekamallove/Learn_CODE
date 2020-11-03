/*
Subarray: Continous part of the array.
No. of Subarrays= (nC2+n)= n*(n+1)/2

Subsequence: A subsequence is a sequence that can be derived an array
by selecting zero or more elements, withiout changing the order of the remaining elements. 
It is not contnious but is always in order,
no. of Subsequence= 2^n 
*/

//"Every subarray is a subsequence but very Subsequence is not a Subarray"

/*
Problem: Given an array of size n, output sum of each subarrry of the given array
*/

#include <iostream>
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

    int curr = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            curr = 0;
            curr = curr + arr[j];
            cout << curr << endl;
        }
    }
}
