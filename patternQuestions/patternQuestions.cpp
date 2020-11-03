// rectangle pattern
#include <iostream>
using namespace std;

int main()
{
    int rows;
    int columns;
    cout << "Enter the NUmber of coloumns: \n";
    cin >> rows;

    cout << "Enter the nukber of columns: \n";
    cin >> columns;

    for (int i=1 ; i<=rows; i++)
    {
        for (int j = 1; j<=columns; j++)
        {
            cout <<"*";
        }
        cout << endl;
    }
}

// hollow ractangle


#include <iostream>
using namespace std;

int main()
{
    int rows;
    int columns;
    cout << "Enter the NUmber of coloumns: \n";
    cin >> rows;

    cout << "Enter the nukber of columns: \n";
    cin >> columns; 
    for (int i=1 ; i<=rows; i++)
    {
        for (int j = 1; j<=columns; j++)
        {
            if (i==1 || i==rows)
            {
                cout << "*";
            }
            else if(j==1 || j==columns)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

// inverted half pyramid

#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;

   for (int i=n; i>=1; i--)
   {
       for (int j =1; j<=i; j++)
       {
           cout <<"*";
       }
       cout << endl;
   }

}

// inverted half pyramid 180 degree rotated


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if(j<=n-i)
            {
                cout << "  ";

            }
            else
            {
                cout << " *";
            }
            
        }
    }
}

// half pyramid using numbers

#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;

   for (int i =1; i<=n; i++)
   {
       for (int j =1; j<=i; j++)
       {
           cout << i;
       }cout <<  endl;
   } 
}


// floyd's triangle

#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
    int count = 1;
   for (int i=1; i<=n; i++)
   {
       for (int j=1; j<=i; j++)
       {
           cout << count ;
           count++;
       }cout << endl;
   }
}


// butterfly pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "*";
            
        }
        int space = 2*n-2*i;

        for (int j=1; j<=space; j++)
        {
            cout << " ";
        }
        for (int j=1; j<=i; j++)
        {
            cout << "*";
            
        }cout << endl;
    }

        for (int i=1; i<=n; i--)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "*";
            
        }
        int space = 2*n-2*i;

        for (int j=1; j<=space; j++)
        {
            cout << " ";
        }
        for (int j=1; j<=i; j++)
        {
            cout << "*";
            
        }cout << endl;
    }
}