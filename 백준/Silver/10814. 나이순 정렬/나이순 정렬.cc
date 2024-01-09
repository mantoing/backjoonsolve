#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool comp(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main() {
	int n;
	pair<int, string> p;
	vector<pair<int, string> > v;

	cin >> n;
	for (int i=0; i<n; i++)
	{
		cin >> p.first >> p.second;
		v.push_back(p);
	}
	stable_sort(v.begin(), v.end(), comp);
	for (int i=0; i < n; i++)
	{
		cout << v.at(i).first << ' ' << v.at(i).second << '\n';
	}
	return 0;
}