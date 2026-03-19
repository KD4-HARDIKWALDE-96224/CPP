#include <iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;
    static const double PI;   // static PI

public:
    // default constructor
    Cylinder() : radius(1), height(1)
    {
    }

    // parameterized constructor (initializer list)
    Cylinder(double radius, double height) : radius(radius), height(height)
    {
    }

    // getter for radius
    double getRadius()
    {
        return radius;
    }

    // setter for radius
    void setRadius(double r)
    {
        radius = r;
    }

    // getter for height
    double getHeight()
    {
        return height;
    }

    // setter for height
    void setHeight(double h)
    {
        height = h;
    }

    // calculate volume
    void calculateVolume()
    {
        double volume = PI * radius * radius * height;
        cout << "Volume = " << volume << endl;
    }
};

// static member initialization
const double Cylinder::PI = 3.14;

int main()
{
    int choice;

    do
    {
        cout << "\n1. Default Cylinder";
        cout << "\n2. Custom Cylinder";
        cout << "\n3. Use Setter";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Cylinder c1;
            c1.calculateVolume();
            break;
        }

        case 2:
        {
            double r, h;
            cout << "Enter radius and height: ";
            cin >> r >> h;

            Cylinder c2(r, h);
            c2.calculateVolume();
            break;
        }

        case 3:
        {
            Cylinder c3;
            double r, h;

            cout << "Enter radius: ";
            cin >> r;
            c3.setRadius(r);

            cout << "Enter height: ";
            cin >> h;
            c3.setHeight(h);

            c3.calculateVolume();
            break;
        }
        }

    } while (choice != 0);

    return 0;
}