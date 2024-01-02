#include <iostream>
#include <string>

using namespace std;

int main()
{
	string year;
	int tmp;
	cin >> year;
	tmp = stoi(year);
	tmp -= 543;
	year = to_string(tmp);
	cout << year << endl;
	return 0;
}