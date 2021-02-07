/*
=> Find the maximum and minimum element in an array.
*/
#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n);
int findMin(int arr[], int n);

int main()
{
  int n; cin>>n; //taking the size of the array as input
  int arr[n];
  for(int i=0; i<n; i++) cin>>arr[i]; //taking the array input

  cout<<"max: "<<findMax(arr, n)<<endl;
  cout<<"min: "<<findMin(arr, n)<<endl;
}


int findMax(int arr[], int n)
{
  int mx = INT_MIN;
  for(int i=0; i<n; i++) mx = max(mx , arr[i]);

  return mx;
}
int findMin(int arr[], int n)
{
  int mn = INT_MAX;
  for(int i=0; i<n; i++) mn = min(mn, arr[i]);

  return mn;
}
