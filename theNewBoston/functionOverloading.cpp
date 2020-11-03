#include <iostream>
using namespace std;
void printNumber(int x)
{
    cout << "an integer " << x << endl;
}

void printNumber(float y)
{
    cout << "a float " << y << endl; 
}
int main()
{
   int a = 54;
   float b = 32.4896;

   printNumber(a);
   printNumber(b);


}