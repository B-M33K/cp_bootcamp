#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <fstream>
#include <cstdio>

using namespace std;

int main()
{
    stack<int>  s;
    int         t;
    int         i;
    int         a;
    int         b;


    scanf("%d",&t);
    i = 0;
    while (i < t)
    {
        b = s.empty();
        scanf("%d",&a);
        if (a == 1)
        {
            scanf("%d",&a);
            s.push(a);
        }else if (a == 2)
        {
            if (!b)
                s.pop();
        }else
        {
            if (b)
                printf("Empty!\n");
            else
                printf("%d\n",s.top());
        }
        i++;
    }
}