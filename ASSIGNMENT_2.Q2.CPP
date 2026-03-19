#include <iostream>
using namespace std;

class TollBooth
{
private:
    unsigned int totalCars;
    double totalMoney;
    unsigned int payingCars;
    unsigned int nonPayingCars;

public:
    // constructor
    TollBooth()
    {
        totalCars = 0;
        totalMoney = 0.0;
        payingCars = 0;
        nonPayingCars = 0;
    }

    void payingCar()
    {
        totalCars++;
        payingCars++;
        totalMoney = totalMoney + 0.50;
    }

    void nopayCar()
    {
        totalCars++;
        nonPayingCars++;
    }

    void printOnConsole()
    {
        cout << "Total Cars: " << totalCars << endl;
        cout << "Paying Cars: " << payingCars << endl;
        cout << "Non-Paying Cars: " << nonPayingCars << endl;
        cout << "Total Money Collected: " << totalMoney << endl;
    }
};

int main()
{
    TollBooth t;
    int choice;

    do
    {
        cout << "\n1. Paying Car";
        cout << "\n2. Non-Paying Car";
        cout << "\n3. Show Data";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.payingCar();
            break;

        case 2:
            t.nopayCar();
            break;

        case 3:
            t.printOnConsole();
            break;
        }

    } while (choice != 0);

    return 0;
}