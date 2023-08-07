#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    stack<char> s;
    int         t;
    int         i;
    string      str;

    cin >> t;
    cin.ignore();
    i = 0;
    while (i < t)
    {
        while (s.size() != 0) {
            s.pop();
        }
        getline(cin, str);
        string::iterator it;
        for (it = str.begin(); it != str.end(); it++)
        {
            if (*it == '(')
                s.push('(');
            else if (*it == '[')
                s.push('[');
            else if (*it == ')')
            {
                if(!s.empty() && s.top() == '(')
                    s.pop();
                else
                    break;
            }
            else
            {
                if(!s.empty() && s.top() == '[')
                    s.pop();
                else
                    break;
            }
        }
        if (s.empty() && it == str.end())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        i++;
    }
    return (0);
}