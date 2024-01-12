#include <iostream>
#include <algorithm>
using namespace std;

int compare(int a, int b)
{
	return (a < b);
}

int main()
{
	int n;
	int arr[1000001];
	cin >> n;

	for (int i=0; i<n; i++)
		cin >> arr[i];
	
	sort(arr, arr + n, compare);
	for (int i=0; i<n; i++)
	{
		if (arr[i] == arr[i - 1])
			continue;
		cout << arr[i] << "\n";
	}
	return 0;
}