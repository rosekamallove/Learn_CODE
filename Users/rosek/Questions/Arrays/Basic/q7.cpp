/*
Given an number n, find the number of occurences of n in the array
*/
#include <bits/stdc++.h>
using namespace std;

void inputArr(int arr[], int n);
void printArr(int arr[], int n);
int numberOfOccurences(int arr[], int n, int key);

int main()
{
	int n; cin>>n;
    int key; cin>>key;
    int arr[n];
    inputArr(arr, n);
    cout<<numberOfOccurences(arr, n, key);
	return 0;
}

int numberOfOccurences(int arr[], int n, int key)
{
    int counter=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key) counter++;
    }
    return counter;
}

void inputArr(int arr[], int n)
{
	for(int i=0; i<n; i++) cin>>arr[i];
}
void printArr(int arr[], int n)
{
	for(int i=0; i<n; i++) cout<<arr[i];
}