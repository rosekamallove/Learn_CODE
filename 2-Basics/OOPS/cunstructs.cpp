/*
A constructor is a member function of a class which initializes objects of a class. 
In C++, Constructor is automatically called when object(instance of class) create.
It is special member function of the class.
*/
#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;

public:
    int age;
    bool gender;

    Student()
    {
        cout << "Default Constructor" << endl;
    } //DefaultConstructor

    Student(string s, int a, int g)
    {
        cout << "ParameterizedConstructor" << endl;
        name = s;
        age = a;
        gender = g;
    } //ParameterizedConstructor

    Student(Student &a)
    {
        cout << "ParameterizedConstructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
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
    Student a("Urvi", 20, 1);
    // a.printInfo();
    Student b;
    Student c = a;
}
