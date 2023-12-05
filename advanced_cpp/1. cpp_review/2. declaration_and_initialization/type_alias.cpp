#include<iostream>
#include<vector>
using namespace std;
using IntVec = vector<int>;

int main()
{
    vector<IntVec> v{{1, 2}, {3}};
    for(int i = 0; i < v.size(); i++)
    {
        for(int j=0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}