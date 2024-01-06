#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
	while (1)
	{
		long num_a, num_b, num_c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		num_a = a * a;
		num_b = b * b;
		num_c = c * c;
		if (num_a + num_b == num_c || num_b + num_c == num_a || num_a + num_c == num_b)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
	return 0;
}