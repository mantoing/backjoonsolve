#include <iostream>
#include <deque>

using namespace std;

int main()
{
	int N;
	string cmd;
	deque<int> d;
	int obj, res;
	res = 0;

	cin >> N;
	for (int i=0; i < N; i++)
	{
		cin >> cmd;
		if (cmd == "push_front")
		{
			cin >> obj;
			d.push_front(obj);
		}
		if (cmd == "push_back")
		{
			cin >> obj;
			d.push_back(obj);
		}
		if (cmd == "pop_front")
		{
			if (d.size() == 0)
			{
				res = -1;
				cout << res << "\n";
			}
			else
			{
				res = d.front();
				cout << res << "\n";
				d.pop_front();
			}
		}
		if (cmd == "pop_back")
		{
			if (d.size() == 0)
			{
				res = -1;
				cout << res << "\n";
			}
			else
			{
				res = d.back();
				cout << res << "\n";
				d.pop_back();
			}
		}
		if (cmd == "size")
			cout << d.size() << "\n";
		if (cmd == "empty")
		{
			if (d.size() == 0)
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
		if (cmd == "front")
		{
			if (d.size() == 0)
			{
				res = -1;
				cout << res << "\n";	
			}
			else
			{
				res = d.front();
				cout << res << "\n";
			}
		}
		if (cmd == "back")
		{
			if (d.size() == 0)
			{
				res = -1;
				cout << res << "\n";	
			}
			else
			{
				res = d.back();
				cout << res << "\n";
			}
		}
	}
	return 0;
}