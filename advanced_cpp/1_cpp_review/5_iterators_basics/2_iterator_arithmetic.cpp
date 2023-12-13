#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto first = begin(v);
    cout << *first;
    cout << endl;
    auto last = prev(end(v));
    cout << *last;
    cout << endl;
    cout << distance(begin(v), end(v));
    cout << endl;
    auto mid = begin(v);
    advance(mid, distance(begin(v), end(v))/2);
    cout << *mid;
    return 0;
}