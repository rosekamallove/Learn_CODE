// "FOR LOOP"
#include <iostream>
using namespace std;

int main()
{
   for (int x; x<=10; x++)
    cout << "helloworld\n";
}

// finding sum of numbers till n

#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int sum;
   for(int counter=1; counter<=n; counter++)
   {
       sum = sum + counter;
   }
}

//  WHILE LOOP
// while(condition is true)
// {
     //body
// }


#include <iostream>
using namespace std;

int main()
{
   int n;
   while(n>0)
   {
       cout << n << endl;
       cin >> n;
   }
    
}

// DO - WHILE LOOP
//do{
    //body
//}while();

#include <iostream>
using namespace std;

int main()
{
   int n;
   do
   {
       cout << n << endl;
       cin >> n;
   }while(n>0);
    
}

// programm to show multi plication table upto 10

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a positive integer\n";
    cin >> n;

    for (int i; i<=n; i++)
    {
        cout << n*i << endl;
    }
}

// program to add only positive interger

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a positive integer\n";
    cin >> n;
    int sum=0;

    if (n>0)
    {
        for(int y =1 ; y<=n; y++)
        {
            sum = sum +y;
            // cout << sum <<endl;
        }
    }
    cout << sum <<endl;
}

// alternatively
#include <iostream>
using namespace std;
int main()
{
    int number;
    
    while(number>=0)
    {
        int sum =0;
        sum += number;
        cin>>number;

    }   
} 

