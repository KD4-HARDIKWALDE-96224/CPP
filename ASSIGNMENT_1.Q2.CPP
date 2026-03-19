#include <iostream>
using namespace std;

struct Date
{
    int day, month, year;

    void initDate()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter day: ";
        cin >> day;

        cout << "Enter month: ";
        cin >> month;

        cout << "Enter year: ";
        cin >> year;
    }

    void printDateOnConsole()
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    bool isLeapYear()
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    Date d;
    int choice;

    do
    {
        cout << "\n1. Init Date";
        cout << "\n2. Accept Date";
        cout << "\n3. Print Date";
        cout << "\n4. Check Leap Year";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            d.initDate();
            break;

        case 2:
            d.acceptDateFromConsole();
            break;

        case 3:
            d.printDateOnConsole();
            break;

        case 4:
            if (d.isLeapYear())
                cout << "Leap Year\n";
            else
                cout << "Not Leap Year\n";
            break;
        }

    } while (choice != 0);

    return 0;
}