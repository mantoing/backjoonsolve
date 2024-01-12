#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int m;
	int cnt = 0;
	int res = 0;

	cin >> n;
	for (int i=0; i < n; i++)
	{
		cin >> m;
		for (int j=1; j <= m; j++)
		{
			if (m % j == 0)
				cnt++;
		}
		if (cnt == 2)
			res++;
		cnt = 0;
	}
	cout << res << "\n";
	return 0;
}