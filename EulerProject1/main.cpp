#include <iostream>
using namespace std;

int main()
{
    int sum = 0, maxx = 1000;
    for (int i = 0; i < maxx; i++)
    {
        if (i % 3==0 || i % 5==0)
        {
            sum+=i;
            cout<<sum<<" ";
        }
    }
    cout<<endl;
    cout<<sum<<endl;
}
