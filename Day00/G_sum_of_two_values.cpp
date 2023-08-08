#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	map<int, int> m;
	map<int,int>::iterator it;
	int	size;
	int	target;
	int	x;
	int	i;
	
	cin >> size >> target;
	i = 0;
	while (i < size)
	{
		cin >> x;
		it = m.find(target - x);
		if (it != m.end())
		{
			cout << it->second + 1 << " " << i + 1 << "\n";
			return (0);
		}
		else
			m[x] = i;
		i++;
	}
	cout << "IMPOSSIBLE\n";
}