#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int         t;
    int         x;

    cin >> t;
    while (t--)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (vector<int>::iterator ptr = v.begin(); ptr != v.end(); ptr++)
        cout << *ptr << ' ';
    cout << endl;
}