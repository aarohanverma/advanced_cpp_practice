#include<iostream>
using namespace std;

int main()
{
    string s1 = R"x(<a href="file">"C:\Program Files(x86)"\</a>\n)x";
    cout << s1;
    return 0;
}