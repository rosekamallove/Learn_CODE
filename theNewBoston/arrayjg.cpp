#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int arraySize;
    cin>>arraySize;

    int array[arraySize];
    for (int x=0; x<=arraySize; x++)
    {
        int n;
        cin>>n;
        array[arraySize] = n;
    }

    cout << array << endl;
    
    return 0;
}