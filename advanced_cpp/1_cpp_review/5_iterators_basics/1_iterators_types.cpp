#include<iostream>
#include<string>
using namespace std;

void fun(const string& str)
{
    // Const Iterator
    string::const_iterator const_itr;
    for(const_itr=str.cbegin(); const_itr!=str.cend(); ++const_itr)
    {
        cout << *const_itr << " ";
    }
    cout << endl;
    // Const Reverse Iterator
    string::const_reverse_iterator r_const_itr;
    for(r_const_itr=str.crbegin(); r_const_itr!=str.crend(); ++r_const_itr)
    {
        cout << *r_const_itr << " ";
    }
    cout << endl;
    // Const Iterator
    for(const_itr=cbegin(str); const_itr!=cend(str); ++const_itr)
    {
        cout << *const_itr << " ";
    }
    cout << endl;
    // Const Reverse Iterator
    for(r_const_itr=crbegin(str); r_const_itr!=crend(str); ++r_const_itr)
    {
        cout << *r_const_itr << " ";
    }
}
int main()
{
    string str{"Hello"};
    // Basic Iterator
    string::iterator itr;
    for(itr=str.begin(); itr!=str.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
    // Reverse Iterator
    string::reverse_iterator r_itr;
    for(r_itr=str.rbegin(); r_itr!=str.rend(); ++r_itr)
    {
        cout << *r_itr << " ";
    }
    cout << endl;
    // Basic Iterator
    for(itr=begin(str); itr!=end(str); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
    // Reverse Iterator
    for(r_itr=rbegin(str); r_itr!=rend(str); ++r_itr)
    {
        cout << *r_itr << " ";
    }
    cout << endl;
    fun(str);
    cout << endl;
    for(auto ch: str)
    {
        cout << ch << " ";
    }
    return 0;
}