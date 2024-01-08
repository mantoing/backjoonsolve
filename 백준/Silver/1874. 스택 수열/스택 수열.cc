#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(void)
{
	vector<char>print;
	stack<int>s;
	int n;
	int cnt = 1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int total;
		cin >> total;

		while (cnt <= total)
		{
			s.push(cnt);
			cnt++;
			print.push_back('+');
		}
		if (s.top() == total)
		{
			s.pop();
			print.push_back('-');
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < print.size(); i++)
		cout << print[i] << '\n';
}