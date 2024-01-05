#include <iostream>

using namespace std;

int main()
{
    int a, res;
    string b;
    cin >> a;
    cin >> b;
    res = 0;
    for (int i=0; i < a; i++)
    {
        res += b[i] - '0';
    }
    cout << res << endl;
    return 0;  
}