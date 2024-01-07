#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int N;
	string cmd;
	queue<int> q;
	int obj, res;
	res = 0;

	cin >> N;
	for (int i=0; i < N; i++)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			cin >> obj;
			q.push(obj);
		}
		if (cmd == "pop")
		{
			if (q.size() == 0)
			{
				res = -1;
				cout << res << "\n";
			}
			else
			{
				res = q.front();
				cout << res << "\n";
				q.pop();
			}
		}
		if (cmd == "size")
			cout << q.size() << "\n";
		if (cmd == "empty")
		{
			if (q.size() == 0)
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
			if (q.size() == 0)
			{
				res = -1;
				cout << res << "\n";	
			}
			else
			{
				res = q.front();
				cout << res << "\n";
			}
		}
		if (cmd == "back")
		{
			if (q.size() == 0)
			{
				res = -1;
				cout << res << "\n";	
			}
			else
			{
				res = q.back();
				cout << res << "\n";
			}
		}
	}
	return 0;
}