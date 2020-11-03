#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main()
{
   int bucky[3] = {20,45,56};
   int jessica[6] = {23,45,56,542,3,455};

   printArray(bucky,3);
   cout << "\n";
   printArray(jessica,6);
}

void printArray(int theArray[], int sizeOfArray)
{
    for(int x = 0; x<sizeOfArray; x++)
    {
        cout << theArray[x] << endl;
    }
}