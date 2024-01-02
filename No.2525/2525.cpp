#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int cal;
	cin >> a >> b;
	cin >> c;
	cal = b + c;
	if (cal >= 60)
	{
		a += (cal /= 60);
		cal = (b + c) % 60;
		b = cal;
	}
	else
		b = cal;
	if (a > 23)
		a = a - 24;

	cout << a << " " << b << endl;
	return 0;
}