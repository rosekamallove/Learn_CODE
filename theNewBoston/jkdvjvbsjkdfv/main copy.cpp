#include <iostream>
#include "sally.h"
using namespace std;

int main()
{
    sally sallyObject;
    sally *sallyPointer = &sallyObject;
    sallyObject.printCrap(); // when you use an object you use dot separator

    sallyPointer -> printCrap(); // when accessing from a pointer you use this '->'
}