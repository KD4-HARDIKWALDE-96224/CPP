#include<iostream>
using namespace std;

class BankAccount
{
private:
    int accNo;
    string name;
    double balance;

public:
    void accept()
    {
        cin >> accNo >> name >> balance;
    }

    void deposit(double amt)
    {
        balance += amt;
    }

    void withdraw(double amt)
    {
        if(amt <= balance)
            balance -= amt;
    }

    void display()
    {
        cout << balance << endl;
    }
};

int main()
{
    BankAccount b;
    b.accept();
    b.deposit(1000);
    b.withdraw(500);
    b.display();
}