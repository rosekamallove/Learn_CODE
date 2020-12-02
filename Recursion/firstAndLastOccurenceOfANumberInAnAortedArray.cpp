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

int lastOccurence(int arr[], int n, int i, int key)
{
    if(i==n) return -1;

    int restArray = lastOccurence(arr,n,i+1,key);
    if(restArray!=-1)
    {
        return restArray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    else
    {
        return -1;
    }
    

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int key;
    cout<<"entr the number you wanna find the occurnce of:"<<endl;
    cin>>key;

    for(int i; i<n; i++ )
    {
        cin>>arr[i];
    }

    cout << firstOcc(arr,n,0,key)<<endl;
    cout << lastOccurence(arr,n,0,key)<<endl;
}