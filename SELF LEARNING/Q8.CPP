#include<iostream>
using namespace std;

class Programmer
{
public:
    Programmer(){ cout << "Programmer\n"; }
    void work(){ cout << "Coding\n"; }
};

class Teacher
{
public:
    Teacher(){ cout << "Teacher\n"; }
    void work(){ cout << "Teaching\n"; }
};

class ProgrammingTeacher : public Programmer, public Teacher
{
public:
    ProgrammingTeacher(){ cout << "ProgrammingTeacher\n"; }
};

int main()
{
    ProgrammingTeacher obj;
    obj.Programmer::work();
    obj.Teacher::work();
}