#include <vectors>
#include <algorithm>
#include <iostream>
// // #include <vectors>
// #include <algorithms>
using namespace std;

bool f(int x, int y)
{
    return x > y;
}
int main()
{
    vector<int> A = {11, 2, 3, 14};

    cout << A[1] << endl;

    sort(A.begin(), A.end()); // O(NlogN)

    //2,3,4,11,14

    // binary search in O(log(n)) time complexity

    bool present = binary_search(A.begin(), A.end(), 3); //true
    present = binary_search(A.begin(), A.end(), 3);      // false

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

    cout << it << " " << it1 << endl;
    cout << it1 - it << endl; //4

    sort(A.begin(), A.end(), f);

    vector<int>::it3;

    for (it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 < " ";
    }
    cout << endl;

    for (int x; A)
    {
        cout << x << "  ";
    }
    cout << endl;
}