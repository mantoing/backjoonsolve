#include <iostream>
#include <algorithm>
using namespace std;

int compare(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	else	
		return a.length() < b.length();
}

int main() {
	int n;
	string str[200001], tmp;

	cin >> n;
	for (int i=0; i < n; i++)
		cin >> str[i];
	sort(str, str + n, compare);
	for (int i=0; i < n; i++)
	{
		if (str[i] == str[i - 1])
			continue;;
		cout << str[i] << "\n";
	}
	return 0;
}