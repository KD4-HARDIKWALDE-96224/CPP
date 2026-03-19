#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    // input operator >>
    friend istream& operator>>(istream &in, Distance &d)
    {
        cout << "Enter feet: ";
        in >> d.feet;
        cout << "Enter inches: ";
        in >> d.inches;
        return in;
    }

    // output operator <<
    friend ostream& operator<<(ostream &out, Distance &d)
    {
        out << d.feet << " feet " << d.inches << " inches";
        return out;
    }

    // + operator (member)
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        // convert inches to feet
        temp.feet += temp.inches / 12;
        temp.inches = temp.inches % 12;

        return temp;
    }

    // ++ operator (member)
    void operator++()
    {
        inches++;
        if (inches >= 12)
        {
            feet++;
            inches = 0;
        }
    }

    // -- operator (friend)
    friend void operator--(Distance &d)
    {
        d.inches--;
        if (d.inches < 0)
        {
            d.feet--;
            d.inches = 11;
        }
    }
};

int main()
{
    Distance d1, d2, d3;

    cout << "Enter first distance:\n";
    cin >> d1;

    cout << "Enter second distance:\n";
    cin >> d2;

    // addition
    d3 = d1 + d2;
    cout << "\nAddition: " << d3 << endl;

    // increment
    ++d1;
    cout << "After ++ d1: " << d1 << endl;

    // decrement
    --d2;
    cout << "After -- d2: " << d2 << endl;

    return 0;
}