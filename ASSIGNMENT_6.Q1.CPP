#include <iostream>
using namespace std;

class Product
{
protected:
    int id;
    string title;
    double price;

public:
    virtual void accept()
    {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    virtual double calculatePrice() = 0; // pure virtual
    virtual void display() = 0;

    virtual ~Product() {} // destructor
};

// Book class
class Book : public Product
{
private:
    string author;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter author: ";
        cin >> author;
    }

    double calculatePrice()
    {
        return price - (price * 0.10); // 10% discount
    }

    void display()
    {
        cout << "\nBook: " << title << " Final Price: " << calculatePrice() << endl;
    }
};

// Tape class
class Tape : public Product
{
private:
    string artist;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter artist: ";
        cin >> artist;
    }

    double calculatePrice()
    {
        return price - (price * 0.05); // 5% discount
    }

    void display()
    {
        cout << "\nTape: " << title << " Final Price: " << calculatePrice() << endl;
    }
};

int main()
{
    Product* arr[3];
    int choice;
    double total = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "\n1. Book\n2. Tape\nChoose product: ";
        cin >> choice;

        if (choice == 1)
            arr[i] = new Book();
        else
            arr[i] = new Tape();

        arr[i]->accept();
    }

    cout << "\n--- Bill ---\n";

    for (int i = 0; i < 3; i++)
    {
        arr[i]->display();
        total += arr[i]->calculatePrice();
    }

    cout << "\nTotal Bill = " << total << endl;

    // free memory
    for (int i = 0; i < 3; i++)
        delete arr[i];

    return 0;
}