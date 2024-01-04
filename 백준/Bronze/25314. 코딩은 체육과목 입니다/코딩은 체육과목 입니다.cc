#include <iostream>

using namespace std;

int main()
{
    int a;
    string msg;
    cin >> a;

    a = a / 4;
    for (int i=0; i < a; i++)
    {
        if (i == a - 1)
            msg += "long int";
        else
            msg += "long ";
    }
    cout << msg << endl;
    return 0;
}