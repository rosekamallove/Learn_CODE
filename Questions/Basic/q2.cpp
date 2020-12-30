/*
Problem Statement:
Check whether n is present in an array of size m or not.
Input n,m (Input number, size of array)
Take input n elements for the arrayOutput -> true/false
*/

#include <bits/stdc++.h>
using namespace std;

bool checkIfnPresent(int arr[], int n, int m); //Declaring a bool functin to check if it is present

int main()
{
    int n, m;
    cin >> n >> m; // Where n is the number to be checked and m is the size of the array
    int arr[m];
    for (int i = 0; i < m; i++)
        cin >> arr[i];              //Taking input in array
    if (checkIfnPresent(arr, n, m)) //checking if the reutrn value of the function
        cout << "Yes it is present" << endl;
    else
        cout << "No it is not present" << endl;
}

bool checkIfnPresent(int arr[], int n, int m)
{ //Wriring the logic of the fucntion
    for (int i = 0; i < m; i++)
    {
        if (arr[i] == n)
            return 1;
    }
    return 0;
}
