#include<iostream>
using namespace std;

class Product
{
public:
    virtual void accept(){}
    virtual void display(){}
};

class Book : public Product
{
    int pages;
public:
    void accept(){ cin >> pages; }
    void display(){ cout << pages << endl; }
};

class Tape : public Product
{
    int playtime;
public:
    void accept(){ cin >> playtime; }
    void display(){ cout << playtime << endl; }
};