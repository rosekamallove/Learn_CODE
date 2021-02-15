/*
=> Subarrya are continous and is given by nC2+n = n*(n-1)/2;
=> SUbsequences need not to be continous and is given by n^2;

Problem Statement: 
Given an arr of size n, Output the sum of each subarray of the given array.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin>>n;
  int * a = new int[n];

  for(int i=0; i<n; i++) cin>>a[i];
  
  int sum = 0;

  for(int i=0; i<n; i++)
  {
    sum = 0;
    for(int j=i; j<n; j++)
    {
      sum += a[j];
      cout<<sum<<endl;
    }
  }
}

