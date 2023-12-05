#include<iostream>
using namespace std;

void func(int& y)
{
    y = 1;
    cout << "Address of argument:" << &y << endl;
}

int main()
{
    int x = 2;
    cout << "Address of x:" << &x << endl;
    cout << "Value of x:" << x << endl;
    func(x);
    cout << "Value of x:" << x << endl;
    return 0;
}