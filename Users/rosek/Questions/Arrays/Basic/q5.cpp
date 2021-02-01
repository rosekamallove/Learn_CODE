/*
write a program to sort a given array
*/
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n);
void bubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);

int main()
{
    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    selectionSort(arr, n);
    // insertionSort(arr, n);
    // bubbleSort(arr, n);
    for(int i=0; i<n; i++) cout<<arr[i];
    return 0;
}

void selectionSort(int arr[], int n)
{// Find the smallest element in the array and swap it with the first element of the array.
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++ )
        {
            if(arr[j]<arr[i])
            {
                swap(arr[j], arr[i]); //swap is an inbuilt function in cpp
            }
        }
    }
}// Time Complexity = O(n*n)
void bubbleSort(int arr[], int n)
{//Repeatedly swap two adjacent elements if they are in wrong order

}
void insertionSort(int arr[], int n)
{//Insert an element from an unsorted array to its correct position in sorted array

}
