#include <iostream>

using namespace std;

int main()
{
	int a, b, c, max;
	cin >> a >> b >> c;
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (a == b && b == c)
		cout << 10000 + (a * 1000) << endl;
	else if (a == b || a == c)
		cout << 1000 + (a * 100) << endl;
	else if (b == c)
		cout << 1000 + (b * 100) << endl;
	else if (a != b && b != c)
		cout << max * 100 << endl;
	return 0;
}