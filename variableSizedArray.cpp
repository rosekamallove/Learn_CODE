#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y,s=0;
    cin >>x>>y;
    int *arr[x]; //memory address

    while(x--)
    {
        int num;
        cin >> num;
        arr[s] = new int[num]; // creates an array at *arr memory address
        for(int i=0; i<=num;i++)
        {
            cin>>arr[s][i]; // 2d array
        }
        s++;
    }
    while(y--)
    {
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;

    }
    
    return 0;
}

