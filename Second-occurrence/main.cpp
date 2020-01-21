#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;
    int y = 0;
    int sf = 0;
    for (auto j : word)
    {
        if (j == 'f')
        {
            ++y;
        }
        if (y < 2)
        {
            ++sf;
        }

    }
    if (y == 1)
    {
        cout << -1 << endl;

    }
    else if (y < 1)
    {
        cout << -2 << endl;
    }
    else
    {
        cout << sf << endl;
    }
    system("pause");
}
