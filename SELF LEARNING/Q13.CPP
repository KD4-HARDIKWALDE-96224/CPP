#include<iostream>
using namespace std;

class Payment
{
public:
    virtual void makePayment(double amt)=0;
};

class UPI : public Payment
{
public:
    void makePayment(double amt){ cout<<"UPI "<<amt<<endl; }
};

class Cash : public Payment
{
public:
    void makePayment(double amt){ cout<<"Cash "<<amt<<endl; }
};

class PaymentFactory
{
public:
    static Payment* create(char mode)
    {
        if(mode=='U') return new UPI();
        else return new Cash();
    }
};

int main()
{
    Payment *p = PaymentFactory::create('U');
    p->makePayment(500);
}