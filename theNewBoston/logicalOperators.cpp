// #include <iostream>
// using namespace std;

// int main()
// {
//    int age = 23;
//    int money = 650;

//    if(age > 21)
//     {
//         if(money>500)
//         {
//             cout << "you are allowed in" << endl;
//         }

//     }
// }

// using a bunch of if satements is confusing
// so we have something better called Logical operators

#include <iostream>
using namespace std;

int main()
{
   int age = 23;
   int money = 650;

   if(age>21 || money>500) // && is the logical operator that means 'and'
   {
       cout << "you are allowed in" << endl;
   }
}

// || is a logical operator which is same as 'or'