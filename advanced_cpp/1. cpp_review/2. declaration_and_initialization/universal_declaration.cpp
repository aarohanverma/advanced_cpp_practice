#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a{2};
    vector<int> v{1, 2, 3};
    cout << a << endl;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
}