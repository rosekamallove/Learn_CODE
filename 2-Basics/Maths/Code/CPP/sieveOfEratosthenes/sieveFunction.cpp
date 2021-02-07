#include <bits/stdc++.h>
using namespace std;

int is_prime[1000000];
void sieve();

int main()
{
}

void sieve()
{
    int maxN = 1000000;
    for (int i = 0; i < maxN; i++)
        is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= maxN; i++)
    {
        if (is_prime)
        {
            for (int j = i * i; j <= maxN; j++)
                is_prime[j] = 0;
        }
    }
}
