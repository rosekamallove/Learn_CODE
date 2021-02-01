/*
Find the kth largest and kth smallest number in an array
*/
#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n);



int main()
{
    int k; cin>>k;
    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr, n);
    
    cout<<"KthLargest: "<<arr[n-k]<<endl;
    cout<<"KthSmallest: "<<arr[k-1]<<endl;
    
    return 0;
}

void sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}
