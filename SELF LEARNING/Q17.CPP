#include<memory>
using namespace std;

int main()
{
    unique_ptr<int> u(new int(10));
    shared_ptr<int> s = make_shared<int>(20);
    weak_ptr<int> w = s;
}