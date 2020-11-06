#include <vectors>
#include "stdafx.h"
#include <set>
#include <algorithm>
#include <iostream>

// // #include <vectors>
// #include <algorithms>
using namespace std;

bool f(int x, int y)
{
    return x > y;
}

void vectorDemo()
{
    vector<int> A = {11, 2, 3, 14};
    cout << A[1] << endl;

    sort(A.begin(), A.end()); // O(NlogN)
    //2,3,4,11,14

    // binary search in O(log(n)) time complexity
    bool present = binary_search(A.begin(), A.end(), 3); //true
    present = binary_search(A.begin(), A.end(), 4);      // false

    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 100); //true
    // 2,3,11,14,100

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    // 2,3,11,14,100,100,100,100,100

    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);  // >=
    vector<int>::iterator it1 = upper_bound(A.begin(), A.end(), 100); // >
    // iterator is like a pointer which points to the memory address. of 100 in this case
    cout << *it << " " << *it1 << endl;
    cout << it1 - it << endl; //4

    sort(A.begin(), A.end(), f);

    vector<int>::it3;

    for (it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 < " ";
    }
    cout << endl;

    for (int x : A)
    {
        cout << x << "  ";
    }
    cout << endl;
}

void setDemo()
{
    set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);

    for (int x : S)
    {
        cout << x << " ";
    }
    cout << endl;

    auto it = S.find(-1); // it will be pointing to -1 afte this command is executed

    if (it == S.end())
    {
        cout << "Not present\n";
    }
    else
    {
        cout << "Present\n";
        cout << *it << endl;
    }

    auto it2 = S.lower_bound(-1); // >=
    auto it3 = S.lower_bound(0);  // >

    cout << *it2 << " " << *it3 << endl;

    auto it4 = S.upper_bound(2);
    if (it4 == S.end())
    {
        cout << "OOPS sorry can't find something like that\n";
    }

    S.erase(1);
}

void mapDemo()
{
    map<int, int> A;
    A[1] = 100;
    A[2] = 12;
    A[3] = 123;

    map<char, int> cnt;
    string x = "rachit jain";

    for (char c : x)
    {
        cnt[c]++;
    }
    cout << cnt['a'] << " " << cnt['z'] << endl;

    A.find(100);
    A.erase(100);
    A.find(100);
}

void powerOfSet()
{
    /*
    [x,y] add a interval from x to y
    add[2,3]
    add[10,20]
    add[30, 400]
    give me the interval 1 that contains '13'
    */
    set<pair<int, int>> 5;
    S.insert({2, 3});
    S.insert({10, 20});
    S.insert({30, 400});
    S.insert({401, 450});

    // pair{a,b} is smaller than pair{c,d} iff
    // (a<b)or(a==b and c<d)

}

int main()
{
    setDemo();
}