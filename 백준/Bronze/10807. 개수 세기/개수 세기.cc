#include <iostream>

using namespace std;

int main()
{
    int num;
    int arr[101];
    int v;

    cin >> num;
    for (int i=0; i < num; i++)
    {
        cin >> arr[i];
    }
	cin >> v;
    int check = 0;
    for (int j=0; j < num; j++)
    {
        if (v == arr[j])
            check++;
    }
	cout << check << endl;
    return 0;
}