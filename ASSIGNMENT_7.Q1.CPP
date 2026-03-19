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
        cout << "ID: " << id << ", Salary: " << salary << endl;
    }
};

// Manager
class Manager : public Employee
{
private:
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

// Salesman
class Salesman : public Employee
{
private:
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

// SalesManager
class SalesManager : public Manager, public Salesman
{
public:
    void acceptSM()
    {
        cout << "\nEnter Manager part:\n";
        Manager::acceptManager();

        cout << "\nEnter Salesman part:\n";
        Salesman::acceptSalesman();
    }

    void displaySM()
    {
        cout << "\n--- Manager Info ---\n";
        Manager::displayManager();

        cout << "\n--- Salesman Info ---\n";
        Salesman::displaySalesman();
    }
};

int main()
{
    Manager m[10];
    Salesman s[10];
    SalesManager sm[10];

    int mCount = 0, sCount = 0, smCount = 0;

    int choice;

    do
    {
        cout << "\n1. Add Manager";
        cout << "\n2. Add Salesman";
        cout << "\n3. Add SalesManager";
        cout << "\n4. Display Count";
        cout << "\n5. Display Managers";
        cout << "\n6. Display Salesman";
        cout << "\n7. Display SalesManagers";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            m[mCount].acceptManager();
            mCount++;
            break;

        case 2:
            s[sCount].acceptSalesman();
            sCount++;
            break;

        case 3:
            sm[smCount].acceptSM();
            smCount++;
            break;

        case 4:
            cout << "Managers: " << mCount << endl;
            cout << "Salesman: " << sCount << endl;
            cout << "SalesManagers: " << smCount << endl;
            break;

        case 5:
            for (int i = 0; i < mCount; i++)
                m[i].displayManager();
            break;

        case 6:
            for (int i = 0; i < sCount; i++)
                s[i].displaySalesman();
            break;

        case 7:
            for (int i = 0; i < smCount; i++)
                sm[i].displaySM();
            break;
        }

    } while (choice != 0);

    return 0;
}