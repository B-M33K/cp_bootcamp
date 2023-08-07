#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

 int main()
 {
    set<int>	s;
    string		str;
    int         x;

    while (cin >> str >> x)
    {
        if (str[0] == 'i')
        {
            s.insert(x);
        }
        else if (str[0] == 'e')
        {
            if (s.find(x) != s.end())
                printf("true\n");
            else
                printf("false\n");

        }else
            s.erase(x);
    }
 }