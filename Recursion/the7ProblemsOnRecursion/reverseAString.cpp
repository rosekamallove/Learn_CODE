/*
The following code doesn't actually give a reversed string till line 22
*/

/*
#include<bits/stdc++.h>
using namespace std;

void reverseString(string n, int i=0)
{
    if(i==n.length()) 
    {
        return;
    }
    cout<<n[i]<<endl;
    reverseString(n,i+1);
}

int main()
{
    string n;
    cin>>n;
    reverseString(n);
}

*/

/* 
this one does
*/

#include<iostream>
#include<string>
using namespace std;

void reverseString(string n)    

{
    if(n.length()==0)
    {
        //base case
        return;
    }

    string restOfTheString = n.substr(1);
    reverseString(restOfTheString);
    cout << n[0];
}

int main()
{
    string n;
    cin>>n;
    reverseString(n);
}