#include <iostream>
#include <stack>

using namespace std;

int main()
{
	string cmd;
	stack<int> s;
	int n, obj, res;
	res = 0;
	cin >> n;

	for (int i=0; i < n; i++)
	{
		cin >> cmd;

		if (cmd == "push")
		{
			cin >> obj;
			s.push(obj);
		}

		if (cmd == "top")
		{
			if (s.size() == 0)
			{
				res = -1;
				cout << res << "\n";
			}
			else
				cout << s.top() << "\n";
		}
		if (cmd == "pop")
		{
			if (s.size() == 0)
			{
				res = -1;
				cout << res << "\n";
			}
			else
			{
				cout << s.top() << "\n";
				s.pop();
			}
		}
		if (cmd == "size")
		{
			res = s.size();
			cout << res << "\n";
		}
		if (cmd == "empty")
		{
			if (s.size() == 0)
			{
				res = 1;
				cout << res << "\n";
			}
			else
			{
				res = 0;
				cout << res << "\n";
			}
		}
	}
	return 0;
}