/*
link:https://practice.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1
You are given an array of N+2 integer elements. All elements of the array are in range 1 to N. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.

Example 1:

Input:
N = 4
array[] = {1,2,1,3,4,3}
Output: 1 3
Explanation: In the given array, 
1 and 3 are repeated two times.
Example 2:

Input:
N = 2
array[] = {1,2,2,1}
Output: 2 1
Explanation: In the given array,
1 and 2 are repeated two times 
and second occurence of 2 comes 
before 1. So the output is 2 1.
Your Task:
The task is to complete the function repeatedElements() which takes array arr[] and an integer N as inputs (the size of the array is N + 2 and elements are in range[1, N]) and finds the two repeated element in the array and return them in a pair.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1). 

Constraints:
2 ≤ N ≤ 105
1 ≤ array[i] ≤ N
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Function to find the two repeated element
// arr: input array
// N: denoting that the size of array is N + 2 and range of elements is [1, N]
pair<int, int> twoRepeated(int arr[], int N)
{
    // Your code here
}

// { Driver Code Starts.

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        int a[n + 2];

        for (int i = 0; i < n + 2; i++)
            cin >> a[i];

        pair<int, int> res;
        res = twoRepeated(a, n);
        cout << res.first << " " << res.second << endl;
    }
    return 0;
}
// } Driver Code Ends