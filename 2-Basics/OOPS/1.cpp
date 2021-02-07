#include <bits/stdc++.h>
using namespace std;
/*
A class is a blueprint for creating objects (a particular data structure), 
providing initial values for state (member variables or attributes), 
and implementations of behavior (member functions or methods). 
The user-defined objects are created using the class keyword.
*/
class Student
{
    string name;

public:
    /*
    Essentially, they are meant to allow a class to restrict access to members 
    (fields or functions)
    Broadly speaking, public means everyone is allowed to access,
    private means that only members of the same class are allowed to access,
    and protected means that members of subclasses are also allowed.
    */

    int age;
    bool gender;

    /*
    Getter and Setter in Java are two conventional methods used to retrieve and 
    update values of a variable. 
    They are mainly used to create, modify, delete and view the variable values. 
    The setter method is used for updating values and the getter method 
    is used for reading or retrieving the values.
    */

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
    }

    void printInfo()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Name = ";
        cout << age << endl;
        cout << "Name = ";
        cout << gender << endl;
    }
    // To access private data members we can use other fucntions too.
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
    string s;
    cin >> s;
    Student arr[3];
    for (int i = 0; i < 3; i++)
    {
        //cin >> arr[i].name; as the class memeber is private we 
        //can not access it like this.
        arr[i].setName(s);
        cin >> arr[i].age;
        cin >> arr[i].gender;
    }

    for (int i; i < 3; i++)
    {
        arr[i].printInfo();
    }
}
