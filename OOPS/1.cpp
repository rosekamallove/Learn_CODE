#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    bool gender;

    void printInfo()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Name = ";
        cout << age << endl;
        cout << "Name = ";
        cout << gender << endl;
    }
};

int main()
{
    /*
    Student a;
    a.name = 'urivi';
    a.age = 20;
    a.gender = 1;
    
    Instead of doing this ^ over and over again what we
    we can do is make an array of objets
    */

    Student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i].name;
        cin >> arr[i].age;
        cin >> arr[i].gender;
    }

    for (int i; i < 3; i++)
    {
        arr[i].printInfo();
    }
}
