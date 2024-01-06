#include <iostream>

using namespace std;

int main()
{
    int a, b, v;
	int day;

	cin >> a >> b >> v;
	if ((v - a) % (a - b) == 0)
		day= (v - a) / (a - b);
    else
        day= (v - a) / (a - b) + 1;
	cout << day + 1<< "\n";
	return 0;
}