#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n ;
    int x;
    vector<int> v;
    vector<int>::iterator ptr;

    for (int i = 0; i < n ; i++)
    {
        cin >> x;
        x = x >= 0 ? x += 2 : x;
        v.push_back(x);
    }
    for (ptr = v.begin() ; ptr < v.end() ; ptr++)
    {
        cout << *ptr << ' ';
    }
    return (0);
}