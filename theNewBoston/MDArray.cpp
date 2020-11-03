#include <iostream>
using namespace std;

int main()
{
   int sally[2][3] = {{2,6,4},{8,9,10}};

   // 2,6,4
   // 8,9,10
    
    //cout << sally[0][1] << sally[1][1] << endl;

    for(int row =0; row<2; row++)
    {
        for(int coloumn = 0; coloumn<3; coloumn++)
        {
            cout << sally[row][coloumn] << " ";
        }
        cout << endl;
    }
}