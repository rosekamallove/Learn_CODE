#include <iostream>
using namespace std;
void passByValue(int x);
void passByRefferene(int *x);

int main()
{
   int betty = 23;
   int dandy = 23;
   passByValue(betty);
   passByRefferene(&dandy);

   cout << "betty is now " << betty << endl;
   cout << "dandy is now " << dandy << endl;
}
void passByValue(int x)
{
    x = 99;
}

void passByRefferene(int *x)
{
    *x = 66;
}