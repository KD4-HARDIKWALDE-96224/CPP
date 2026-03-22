#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l = {1,2,3,4,5};

    for(auto it=l.rbegin(); it!=l.rend(); it++)
        cout<<*it<<" ";
}