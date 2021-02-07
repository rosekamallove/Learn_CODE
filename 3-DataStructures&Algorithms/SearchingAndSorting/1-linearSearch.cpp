#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key); //declaring linearSearch

int main()
{
    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];//declaring and taking array input

    int key; cin>>key; //the number that is to be searched

    cout<<linearSearch(arr, n, key)<<endl; //calling the function
    return 0;
}

int linearSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key) return i;
        
    }
    return -1;
}//Time Complexity: O(n)

