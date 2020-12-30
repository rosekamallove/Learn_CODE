#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1 ; // this is like the power of two hence 2^0 = 1 is the initialisation

    while(n>0)
    {
        int y =n%10;
        ans += x*y;
        x *= 2; // and is the iterated in this while loop... 2 2^2 2^3 ....
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout << binaryToDecimal(n) << endl;
}