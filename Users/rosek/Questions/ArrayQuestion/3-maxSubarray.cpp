#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin>>n;
  int * arr = new int[n];
  for(int i=0; i<n; i++) cin>>arr[i];

  //printing subarrays:

  for(int i=0; i<n; i++)
  {
    for(int j=i; j<n; j++)
    {
      for(int k=i; k<=j; k++) cout<<arr[k]<<" ";
      cout<<endl;
    }
  }

  //Problem: Find the subarray with the maximum sum;
  int sum = 0;
  int mx = INT_MIN;
  for(int i=0; i<n; i++)
  {
    sum = 0;
    for(int j=i; j<n; j++)
    {
      sum += arr[j];
    }
    mx = max(mx, sum); 
  }
  cout<<"Max: "<<mx<<endl;

}
