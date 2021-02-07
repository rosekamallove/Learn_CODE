// datatype arratName[size];

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of the array\n";
    cin >>n;

    int array[n];

    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    for(int i=0;i<n;i++)
    {
        cout << array[i]<<endl;
    }
}