/*
Reverse an array
*/
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n);

int main()
{
	int n; cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}	
	reverseArray(arr, n);
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";

	}
	cout<<endl;
	return 0;
}

void reverseArray(int arr[], int n)
{
	int start, end; start=0; end=n-1;
	while(start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
