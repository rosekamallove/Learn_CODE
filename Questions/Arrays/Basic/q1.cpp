/*
Problem Statement:
Create an Array of size given by user. 
Take input from the user for these 'n' elements and print the entire array after that.
*/
#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cout<<a[i];

return 0;
}
