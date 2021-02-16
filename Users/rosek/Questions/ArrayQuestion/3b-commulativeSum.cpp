#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin>>n;
  int * arr = new int[n];
  for(int i=0; i<n; i++) cin>>arr[i];

  int * currSum = new int[n+1];
  currSum[0] = 0;

  for(int i=1; i<=n; i++)
    currSum[i] = currSum[i-1] + arr[i-1];

  int maxSum = INT_MIN;

  for(int i=1; i<=n; i++)
  {
    int sum = 0;
    for(int j=0; j<i; j++)
    {
      sum = currSum[i] - currSum[j];
      maxSum = max(sum, maxSum);
    }
  }
  cout<<maxSum<<endl;
}

