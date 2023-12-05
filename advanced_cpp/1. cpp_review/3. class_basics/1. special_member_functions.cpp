#include<iostream>
#include<string>
using namespace std;

class Test
{   
    private:
    int i;
    string str;
    public:
    // Constructor
    Test() = default;
    Test(int i, const string& str): i(i), str(str)
    {;}
    // Copy Constructor
    Test(const Test& other): i(other.i), str(other.str)
    {;}
    // Assignment Operator
    // Test& operator=(const Test& other) = default;
    Test& operator=(const Test& other) 
    {
        this->i = other.i;
        this->str = other.str;
        return *this;
    }
    Test operator+(const Test& other1)
    {
        return Test(this->i + other1.i, this->str + other1.str);
    }
    // Destructor
    ~Test()
    {;}
    void print_val()
    {
        cout << this << endl;
        cout << i << endl;
        cout << str << endl;
    }
};

int main()
{
    Test T1{1, "a"};
    T1.print_val();
    Test T2(T1);
    T2.print_val();
    Test T3{2, "b"};
    T3 = T1;
    T3.print_val();
    Test T4{3, "c"};
    T4 = T1 + T2;
    T4.print_val(); 
}