#include<iostream>
using namespace std;

namespace college
{
    class Student
    {
        int id;
    public:
        Student(int id){ this->id = id; }
        void display(){ cout << id << endl; }
    };

    class Teacher
    {
        int id;
    public:
        Teacher(int id){ this->id = id; }
        void display(){ cout << id << endl; }
    };
}

int main()
{
    college::Student s(1);
    college::Teacher t(2);

    s.display();
    t.display();
}