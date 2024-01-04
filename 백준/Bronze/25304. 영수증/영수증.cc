#include <iostream>

using namespace std;

int main()
{
    int t_price, t_items, a, b;
    cin >> t_price;
    cin >> t_items;
    for (int i=0; i < t_items; i++)
    {
        cin >> a >> b;
		t_price -= a * b;
    }
    if (t_price == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return (0);
}