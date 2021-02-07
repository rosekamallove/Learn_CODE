#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    for (int x = 2; x <= sqrt(num); x++)
    {
        if (num % x == 0)
        {
            return false;
        }
        else
        {
            {
                return true;
            }
        }
    }
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    for (int i; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}