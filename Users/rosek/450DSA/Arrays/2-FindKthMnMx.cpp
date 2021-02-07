/*
=> Find the Kth larges and kth minimum element
*/

#include<bits/stdc+.h>
using namespace std;

void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);
void bubbleSort(int arr[], int n);

int main()
{
  int n, k; cin>>n>>k;
  for(int i=0; i<n; i++) cin>>arr[i]; 
  
  bubbleSort(arr, n);

  cout<<"Kth Min: "<<arr[k-1]<<endl;
  cout<<"Kth Max: "<<arr[n-k]<<endl;
}


void insertionSort(int arr[], int n)
{/* => Insert an element from unsorted array to its correct position in sorted array.

    =>  Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.
    The array is virtually split into a sorted and an unsorted part.
    Values from the unsorted part are picked and placed at the correct position in the sorted part.
    
   +> Algorithm
    To sort an array of size n in ascending order:
    1: Iterate from arr[1] to arr[n] over the array.
    2: Compare the current element (key) to its predecessor.
    3: If the key element is smaller than its predecessor, compare it to the elements before. 
       Move the greater elements one position up to make space for the swapped element.
       */
 
  for(int i=1; i<n; i++)
  {
    int current = arr[i];
    int j = i-1;
    while(arr[j]>current && j>=0)
    {
      arr[j+1] = arr[j];
      j--;
    } 
    arr[j+1] = current;
  }

}
void selectionSort(int arr[], int n)
{
/*
    => Insert an element from unsorted array to its correct position in sorted array.
    -> The selection sort algorithm sorts an array by repeatedly finding the minimum element
    (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

    1) The subarray which is already sorted.
    2) Remaining subarray which is unsorted.

    -> In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to 
    the sorted subarray.
    */
    
  for(int i=0; i<n; i++)
  {
    for(int j=i+1; j<n; j++)
    {
      if(arr[j]>arr[i])
        swap(arr[i], arr[j]);
    }
  }
}
void bubbleSort(int arr[], int n)
{
  
}
