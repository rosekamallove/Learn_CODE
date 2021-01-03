#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int maxNo, minNo;
    maxNo = INT_MIN;
    minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // maxNo=max(maxNo,array[i]);  can replace the if-statement
        if (array[i] > maxNo)
        {
            maxNo = array[i];
        }
        if (array[i] > minNo)
        {
            minNo = array[i];
        }
    }
}