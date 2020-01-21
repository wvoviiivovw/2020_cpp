#include<iostream>
using namespace std;

int main()
{
    char z;
    const char SRAVNENIE = 'y';
    cout << "Hello, you are using a calculator, do you want to continue?\n\t\t\t(y/n) ";
    cin >> z;
    if (SRAVNENIE == z)
    {
        int a, b, vat, proc;
        cout << "Enter 1 number = ";
        cin >> a;
        cout << "Enter 2 number = ";
        cin >> b;
        cout << "Select an action\n\t1 - (+)\n\t2 - (-)\n\t3 - (*)\n\t4 - (/)\n\t5 - (%)\n ";
        cin >> vat;

        switch (vat)
        {
        case 1:
            proc = a + b;
            cout << "Total = " << proc << endl;

            break;
        case 2:
            proc = a - b;
            cout << "Total = " << proc << endl;

            break;
        case 3:
            proc = a * b;
            cout << "Total = " << proc << endl;

            break;
        case 4:
            proc = a / b;
            cout << "Total = " << proc << endl;

            break;
        case 5:
            proc = a % b;
            cout << "Total = " << proc << endl;

            break;
        default:
            cout << "This option is not provided.";

            break;
        }
    }
    else
    {
        cout << "Bye!" << endl;

    }

system("pause");
}
