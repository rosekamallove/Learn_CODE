#include <iostream>
using namespace std;

int main()
{
    int pocketMoney;
   for (int date =1; date<=30; date++)
   {
       if (date%2 == 0)
       {
           continue; // to move to the next iteration of the loop
       }
       if(pocketMoney==0)
       {
           break; // to terminate the loop
       }
       cout << "go out today!\n";
       pocketMoney=pocketMoney-300;
   }
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int x; x<=n; x++)
    {
        if(x%3==0)
        {
            continue;
        }
        cout << x << endl;
    }
}


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    for(x =2; x<n; x++)
    {
        if(n%x==0)
        {
            cout << "It aint prime\n";
            break;
        }
        
        
    }
    if(n==x)
    {
        cout << "It is a prime\n";
    }
    
}


// printing all prime numbers between a given range