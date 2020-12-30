// Find the maximum and minimum element in an array

#include <bits/stdc++.h>
using namespace std;

void maxInArray(int arr[], int n);
void minInArray(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n]; //creating the array
    for (int i = 0; i < n; i++)
        cin >> arr[i]; //Taking user input in the array
    maxInArray(arr, n);
    minInArray(arr, n);
} //calling the max and min fucntion

void maxInArray(int arr[], int n)
{
    int maxNum = arr[0]; //creating the max variable
    for (int i = 1; i < n; i++)
    {
        maxNum = max(maxNum, arr[i]); //Updating the variable if arr[i] is greater than the variable itself
                                      //Else it remains the same
    }
    cout << "Max : " << maxNum << endl;
}
void minInArray(int arr[], int n)
{
    int minNum = arr[0];
    for (int i = 1; i < n; i++)
    {
        minNum = min(minNum, arr[i]);
    }

    cout << "Min : " << minNum << endl;
}
