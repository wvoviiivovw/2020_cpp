#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Time
{
public:     //______________________________________________________________PUBLIC
    void setTime (int a)
    {
        time = abs(a);
    }
    void PrintTime()
    {
        cout<<"Hour = "<<recountHour()<<endl<<"Minutes = "<<recountMin()<<endl<<"Second = "<<recounSec();
    }
    void PrintFormatSecond()
    {
        cout<<SecondtoFormatVoid();
    }

private:    //______________________________________________________________PRIVATE
    int time = 0;
    int hour = 0;
    int min = 0;
    double second = 0;
    string hourSTR, minSTR, secSTR;
    int hh, mm, ss;
    int secondToFormat = 0;

                    string divisionHour(string strget)   //считываение со строки ЧАСЫ
                    {
                        hourSTR = strget.substr(0 , 2);
                        return hourSTR;
                    }
                    string divisionMin (string strget)  //считывание со строки МИНУТЫ
                    {
                        minSTR = strget.substr(3,2);
                        return minSTR;
                    }
                    string divisionSec (string strget)  //считывание со строки СЕКУНДЫ
                    {
                        secSTR = strget.substr(6 , 2);
                        return secSTR;
                    }
            int convertHour () //перевод из string в int ЧАСЫ
            {
                hh = stoi(hourSTR);
                return  hh;
            }
            int convertMin () //перевод из string в int МИНУТЫ
            {
                mm = stoi(minSTR);
                return mm;
            }
            int convertSec () //перевод из string в int СЕКУНДЫ
            {
                ss = stoi(secSTR);
                return ss;
            }

    int SecondtoFormatVoid ()
    {
        secondToFormat = hh*3600+mm*60+ss;
        return secondToFormat;
    }
//_____________________________________________________________________//
    int recountHour ()
    {
        hour = time /3600;
        return hour;
    }
    int recountMin()
    {
        min = (time - hour*3600)/60;
        return min;
    }
    int recounSec()
    {
        second = time - hour * 3600 - min * 60;
        return second;
    }

};

int main()
{
    Time used;
    int a = 0;
    string strget;
    char choize;
    cout<<"If you want to convert seconds to |hours/minutes/seconds|, press |S|, if you want to convert seconds to format |hours/minutes/seconds| press |H| = ";
    cin >> choize;
    switch (choize)
    {
        case 'H':
            cout<<"Enter second = ";
            cin>>a;
            used.setTime(a);
            used.PrintTime();
                break;
        case 'S':
            cout<<"Enter time ||HH:MM:SS|| = ";
            cin>>choize;
            getline(cin,strget);
            used.PrintFormatSecond();
//        default:
//            cout<<"Error";
//                  break;
    }

    return 0;
}
