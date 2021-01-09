/*
Problem Statement:
Create an Array of size given by user. 
Take input from the user for these 'n' elements and print the entire array after that.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sizeOfArray;
    cin >> sizeOfArray;

    int arr[sizeOfArray]; // Declaring an array named arr if size 'sizeOfArray'

    for (int i = 0; i < sizeOfArray; i++)
        cin >> arr[i]; // Taking input from the user in this array 'arr'

    for (int j = 0; j < sizeOfArray; j++)
        cout << arr[j]; // Printing the elements in the arrray to the console
}
