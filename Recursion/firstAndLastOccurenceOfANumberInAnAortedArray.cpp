#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }

    if(arr[i]==key)
    {
        return i;
        return firstOcc(arr,n,i+1,key);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i; i<n; i++ )
    {
        cin>>arr[i];
    }
}