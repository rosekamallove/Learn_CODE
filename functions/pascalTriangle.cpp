#include<iostream>
using namespace std;

int fact(int x)
{
    int factorial=1;
     
    for (int i=2; i<=x; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}


int main()
{
   int n;
   cout << "enter the number of rows" << endl;
   cin>>n;

   for(int i=0; i<=n; i++)
   {
       for (int j=0; j<=i; j++)
       {
           int element = fact(i)/(fact(i-j)*fact(j));

           cout << element << " ";
       }cout << endl;
   }
 

}