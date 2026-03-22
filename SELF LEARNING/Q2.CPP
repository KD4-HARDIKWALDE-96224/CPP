#include<iostream>
using namespace std;

inline int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

inline int power(int base, int exp)
{
    int result = 1;
    for(int i = 1; i <= exp; i++)
        result *= base;
    return result;
}

int main()
{
    cout << factorial(5) << endl;
    cout << power(2,3) << endl;
}