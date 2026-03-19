#include <iostream>
using namespace std;

class Box
{
private:
    int length, breadth, height;

public:
    // default constructor
    Box()
    {
        length = 1;
        breadth = 1;
        height = 1;
    }

    // single parameter constructor
    Box(int value)
    {
        length = value;
        breadth = value;
        height = value;
    }

    // parameterized constructor
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    void calculateVolume()
    {
        int volume = length * breadth * height;
        cout << "Volume = " << volume << endl;
    }
};

int main()
{
    int choice;

    do
    {
        cout << "\n1. Default values";
        cout << "\n2. Same values";
        cout << "\n3. Different values";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Box b1; // default
            b1.calculateVolume();
            break;
        }

        case 2:
        {
            int value;
            cout << "Enter value: ";
            cin >> value;

            Box b2(value); // same values
            b2.calculateVolume();
            break;
        }

        case 3:
        {
            int l, b, h;
            cout << "Enter length, breadth, height: ";
            cin >> l >> b >> h;

            Box b3(l, b, h); // different values
            b3.calculateVolume();
            break;
        }
        }

    } while (choice != 0);

    return 0;
}