#include <iostream>
using namespace std;

// Base class
class Employee
{
protected:
    int id;
    double salary;

public:
    void accept()
    {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Manager class
class Manager : public Employee
{
protected:
    double bonus;

public:
    void acceptManager()
    {
        accept();
        cout << "Enter bonus: ";
        cin >> bonus;
    }

    void displayManager()
    {
        display();
        cout << "Bonus: " << bonus << endl;
    }
};

// Salesman class
class Salesman : public Employee
{
protected:
    double commission;

public:
    void acceptSalesman()
    {
        accept();
        cout << "Enter commission: ";
        cin >> commission;
    }

    void displaySalesman()
    {
        display();
        cout << "Commission: " << commission << endl;
    }
};

// SalesManager (multiple inheritance)
class SalesManager : public Manager, public Salesman
{
public:
    void accept()
    {
        cout << "\nEnter Manager details:\n";
        Manager::acceptManager();

        cout << "\nEnter Salesman details:\n";
        Salesman::acceptSalesman();
    }

    void display()
    {
        cout << "\n--- Manager Info ---\n";
        Manager::displayManager();

        cout << "\n--- Salesman Info ---\n";
        Salesman::displaySalesman();
    }
};

int main()
{
    SalesManager sm;

    sm.accept();
    sm.display();

    return 0;
}
