#include <iostream>
using namespace std;

// Date class
class Date
{
private:
    int day, month, year;

public:
    void acceptDate()
    {
        cout << "Enter day month year: ";
        cin >> day >> month >> year;
    }

    void printDate()
    {
        cout << day << "/" << month << "/" << year;
    }
};

// Person class
class Person
{
private:
    string name;
    string address;
    Date birthdate;   // association

public:
    void acceptPerson()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter address: ";
        cin >> address;

        cout << "Enter birthdate:\n";
        birthdate.acceptDate();
    }

    void printPerson()
    {
        cout << "\nName: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Birthdate: ";
        birthdate.printDate();
        cout << endl;
    }
};

// Student class
class Student
{
private:
    int id;
    int marks;
    string course;
    Date joiningDate;   // association
    Date endDate;       // association

public:
    void acceptStudent()
    {
        cout << "Enter id: ";
        cin >> id;

        cout << "Enter marks: ";
        cin >> marks;

        cout << "Enter course: ";
        cin >> course;

        cout << "Enter joining date:\n";
        joiningDate.acceptDate();

        cout << "Enter end date:\n";
        endDate.acceptDate();
    }

    void printStudent()
    {
        cout << "\nID: " << id << endl;
        cout << "Marks: " << marks << endl;
        cout << "Course: " << course << endl;

        cout << "Joining Date: ";
        joiningDate.printDate();
        cout << endl;

        cout << "End Date: ";
        endDate.printDate();
        cout << endl;
    }
};

int main()
{
    Person p;
    Student s;

    cout << "\n--- Enter Person Details ---\n";
    p.acceptPerson();

    cout << "\n--- Enter Student Details ---\n";
    s.acceptStudent();

    cout << "\n--- Person Details ---";
    p.printPerson();

    cout << "\n--- Student Details ---";
    s.printStudent();

    return 0;
}