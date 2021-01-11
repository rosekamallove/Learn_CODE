/*
link:https://practice.geeksforgeeks.org/problems/common-elements5420/1
Given two lists V1 and V2 of sizes n and m respectively. Return the list of elements common to both the lists and return the list in sorted order. Duplicates may be there in the output list.

Example:

Input:
5
3 4 2 2 4
4
3 2 2 7

Output:
2 2 3

Explanation:
The first list is {3 4 2 2 4}, and the second list is {3 2 2 7}. 
The common elements in sorted order are {2 2 3}
User Task:
This is a function problem. You need to complete the function common_element that takes both the lists as parameters and returns a list of common elements.

Constraints:
1 <= n, m <= 105
1 <= Vi <= 105
*/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

//Back-end complete function Template for C++

vector<int> common_element(vector<int> v1, vector<int> v2)
{
    // Your code here
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v1(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        int m;
        cin >> m;
        vector<int> v2(m, 0);
        for (int i = 0; i < m; i++)
        {
            cin >> v2[i];
        }
        vector<int> result;
        result = common_element(v1, v2);
        for (auto i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}