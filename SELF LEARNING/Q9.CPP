#include<iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    virtual void work() = 0;
};

class Student : public Person
{
    int marks;
public:
    void work(){ cout << "Studying\n"; }
};

class Teacher : public Person
{
    int salary;
public:
    void work(){ cout << "Teaching\n"; }
};

int main()
{
    Person *p;

    Student s;
    Teacher t;

    p = &s;
    p->work();

    p = &t;
    p->work();
}