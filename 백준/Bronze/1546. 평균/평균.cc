#include <iostream>
#include <stack>

using namespace std;

int main() {
	int total;
	int score[1001] = {};
	int max = 0;
	double result = 0;

	cin >> total;
	for (int i=0; i<total; i++)
	{
		cin >> score[i];
		if (score[i] > max)
		{
			max = score[i];
		}
		result += score[i];
	}
	result = result * 100.0 / max / total;

	cout << result;
	return (0);
}