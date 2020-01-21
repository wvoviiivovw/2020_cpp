#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int kolvoSim;
    int tipLine;
    char simbol;
    int index = 0;

    cout << "Enter the number of characters = ";
    cin >> kolvoSim;
    cout << "Select line type: \n\t1-horizontal\n\t2-vertical" << endl;
    cin >> tipLine;
    cout << "Enter character - ";
    cin >> simbol;
    cout << "\n";

    if (tipLine == 1)
    {
        while (index < kolvoSim)
        {
            cout << simbol;
            index++;
        }
    }
    else if (tipLine == 2)
    {
        while (index < kolvoSim)
        {
            cout << simbol << endl;
            index++;
        }

    }
    else
    {
        cout << "ERROR" << endl;
    }
    _getch();
}
