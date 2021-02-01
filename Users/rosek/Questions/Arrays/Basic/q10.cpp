/*
move all the negative elements to one side of the array
*/
#include <bits/stdc++.h>
using namespace std;

void inputArr(int arr[], int n);
void printArr(int arr[], int n);
void sort(int arr[], int n);
int main()
{
	int n; cin>>n;
	int arr[n];
	inputArr(arr, n);
    sort(arr, n);
	
	printArr(arr, n);

	return 0;
}

void sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++ )
        {
            if(arr[j]<arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

void inputArr(int arr[], int n)
{
	for(int i=0; i<n; i++) cin>>arr[i];
}
void printArr(int arr[], int n)
{
	for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}