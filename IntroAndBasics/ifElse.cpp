#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    cout << "Enter Two Numbers \n" << endl;
    cin >> x >> y;

    if (x==y)
    {
        cout << "Both them numbers are equal." << endl;
    }

    else if (x>y)
    {
        cout << x << "is greater than" << y << endl;
    }

    else if (x<y)
    {
        cout << x << " is less than " << y << endl;
    }
}

// If a number is even or odd

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: " << endl;
    cin >> x;
    if (x%2 == 0)
    {
        cout << "Yes the enterd number is even" << endl;
    }
    else
    {
        cout << "Nah man it is odd" << endl;
    }
}

// Finding the max number among two

#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout << "Enter two numbers: \n";
    cin >> n1 >> n2;

    int max, min;

    if (n1>n2)
    {
        max = n1;
        min = n2;
    }
    else if (n2>n1)
    {
        max = n2;
        min = n1;
    }

    cout << "Maximum is " << max << endl;
    cout << "Minimum is " << min << endl;
}

// Finding Max of three numbers

#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout << "Enter three Numbers: \n";
    cin >> n1 >> n2 >> n3;
    int max;
    if (n1>n2)
    {
        if (n1>n3)
        {
            max = n1;
        }
        else
        {
            {
                max = n3;
            }
        }
        
    }
    else if (n2>n3)
    {
        max = n2;
    
    }
    else
    {
        max = n3;
    }
    cout << max << endl;
}

// checking the type of triangle

#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout << "Enter the side lengths of the triangle: \n";
    cin >> x >> y >> z;
    
    if (x==y==z)
    {
        cout << "It is an Isosceles trinagle! \n";
    }
    else if (x==y || x==z || y == z )
    {
        cout << "it is an equilateral triangle! \n";
    }
    else 
    {
        cout << "it is scalane triangle! \n";
    }
    
}

// checking if the entered alphabet is a vowel

#include <iostream>
using namespace std;

int main()
{
    string a;
    cout << "Enter an alphabet in lowercase: \n";
    cin >> a;

    if (a=="a" || a=="e" || a=="i" || a=="o" || a=="u")
    {
        cout << "It is a vowel!\n";
    }
    else
    {
        cout << "it is a consonant!\n";
    }
    

}