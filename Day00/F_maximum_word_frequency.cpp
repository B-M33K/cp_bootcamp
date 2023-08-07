#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    map<string, int>    m;
    int                 t;
    string              key;

    cin >> t;
    while (t--)
    {
        cin >> key;
        m[key] ++; 
    }
    map<string, int>::iterator itr = m.begin();
    key = itr->first;
    t = itr->second;
    itr++;
    while (itr != m.end())
    {
        if (itr->second >= t && itr->first > key)
        {
            key = itr->first;
            t = itr->second;
        }
        itr++;
    }
    cout << key << " " << t << endl;
}