#include <iostream>

using namespace std;

int main()
{
    string a, tmp_a;
    int num, t;

    cin >> t;
    for (int i=0; i < t; i++)
    {
        cin >> num;
        cin >> a;
        for (int j=0; j < a.length(); j++)
        {
            for (int z=0; z < num; z++)
            {
                tmp_a += a[j];
            }
        }
        tmp_a += "\n";
    }
    cout << tmp_a << endl;
    return 0;
}