/*
fib(n)=fib(n-1)+fib(n-2)
*/

#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1) return 0;

    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}