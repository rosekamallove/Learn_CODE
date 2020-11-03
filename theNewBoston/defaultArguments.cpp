#include <iostream>
using namespace std;

int volume(int l=1, int h=1, int b=1); // if the user doesnt enter any value explicitly then these are used.
int main()
{
   cout << volume(4,5,5);
}

int volume(int l, int h, int b)
{
    return l*b*h;
}