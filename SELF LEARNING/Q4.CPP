#include<iostream>
using namespace std;

class Laptop
{
private:
    int brandId;
    double price;

public:
    Laptop()
    {
        brandId = 1;
        price = 50000;
        cout << "Laptop Constructor Called\n";
    }

    ~Laptop()
    {
        cout << "Laptop Destructor Called\n";
    }

    void display()
    {
        cout << brandId << " " << price << endl;
    }
};

int main()
{
    Laptop l;
    l.display();
}