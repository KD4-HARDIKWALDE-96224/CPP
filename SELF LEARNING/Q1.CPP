#include<iostream>
using namespace std;

// Call by Value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 10, num2 = 20;

    cout << "Before swapByValue: " << num1 << " " << num2 << endl;
    swapByValue(num1, num2);
    cout << "After swapByValue: " << num1 << " " << num2 << endl;

    cout << "\nBefore swapByReference: " << num1 << " " << num2 << endl;
    swapByReference(num1, num2);
    cout << "After swapByReference: " << num1 << " " << num2 << endl;

    return 0;
}