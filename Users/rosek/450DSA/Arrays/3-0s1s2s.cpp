/*
 => Giver array that only consists of 0s 1s and 2s, sort this array withous using any sorrting algorithm
*/
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);
void sort(int a[], int n)
int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin >> a[i];
  }

  sort012(a, n);

  for(int i=0;i<n;i++)
  {
    cout << a[i]  << " ";
  }

  cout << endl;
   
    
  return 0;
}



void sort012(int a[], int n)
{  
}

void sort(int a[], int n)
{

}
