#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key); //declaring linearSearch
int binarySearch(int arr[], int n, int key);

int main()
{
    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];//declaring and taking array input
    int key; cin>>key; //the number that is to be searched

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

/*
-> The elements have to be in a sorted order before searching

Search a sorted array by repeatedly dividing the search interval in half. 
Begin with an interval covering the whole array. 
If the value of the search key is less than the item in the middle of 
the interval, narrow the interval to the lower half. 
Otherwise narrow it to the upper half. 
Repeatedly check until the value is found or the interval is empty.
*/
int binarySearch(int arr[], int n, int key)
{
    
}
