/*
FInd the range of the array, 
range is define as the difference between maximum and minumum element of the array
*/
#include <bits/stdc++.h>
using namespace std;

int maxInArray(int arr[], int n);
int minInArray(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n]; 
    for (int i = 0; i < n; i++)
        cin >> arr[i]; 
    int range = (maxInArray(arr, n) - minInArray(arr, n));
    cout<<"Range: "<<range<<endl;
} 

int maxInArray(int arr[], int n)
{
    int maxNum = arr[0]; 
    for (int i = 1; i < n; i++)
    {
        maxNum = max(maxNum, arr[i]); 

    }
    return maxNum;
}
int minInArray(int arr[], int n)
{
    int minNum = arr[0];
    for (int i = 1; i < n; i++)
    {
        minNum = min(minNum, arr[i]);
    }

    return minNum;
}
