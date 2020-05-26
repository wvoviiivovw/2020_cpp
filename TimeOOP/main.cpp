 #include <iostream>
#include <cmath>
#include <string>


using namespace std;

class Time
{
public:     //______________________________________________________________PUBLIC
    void setSecond(int a)
    {
        secTOform = a;
    }
    void printSecForm()
    {
        cout << secHH() << ":" << secMM() << ":" << secSS();
    }
    string strGet(string valueSTR)
    {
        strHHMMSS = valueSTR;
        return strHHMMSS;
    }
    int GettoConsole()
    {
        recountToSec();
        return recountToSec();
    }
private:    //______________________________________________________________PRIVATE
    int secTOform = 0;
    int hour1, min1, sec1 = 0;
    //__________________________________________________________________________HH:MM:SS down
    string strHHMMSS = " ";
    string h = " ";
    string m = " ";
    string s = " ";
    int hF, mF, sF, recountSec = 0;

    int secHH()
    {
        hour1 = secTOform / 3600;
        return hour1;
    }
    int secMM()
    {
        min1 = (secTOform - hour1 * 3600) / 60;
        return min1;
    }
    int secSS()
    {
        sec1 = secTOform - hour1 * 3600 - min1 * 60;
        return sec1;
    }

    //____________________________________________________________________________
    string substr1()
    {
        h = strHHMMSS.substr(0, 2);
        return h;
    }
    string substr2()
    {
        m = strHHMMSS.substr(3, 2);
        return m;
     }
    string substr3()
    {
        s = strHHMMSS.substr(6, 2);
        return s;
    }

    int convertHtoINT()
    {
        hF = stoi(substr1());
        return hF;
    }
    int convertMtoINT()
    {
        mF = stoi(substr2());
        return mF;
    }
    int convertStoINT()
    {
        sF = stoi(substr3());
        return sF;
    }

    int recountToSec()
    {
        recountSec = convertHtoINT()* 3600 + convertMtoINT() * 60 + convertStoINT();
        return recountSec;
    }
};

int main()
{
    int choize, inputsec = 0;
    string strFormatGet = " ";
    Time used;
    cout << "(press 1) second >> |HH:MM:SS| or (press 2) |HH:MM:SS| >> second = ";
    cin >> choize;
    switch (choize)
    {
    case 1:
        //действие перевод из СЕКУНД В ФОРМАТ
        cout << "Enter second = ";
        cin >> inputsec;
        used.setSecond(inputsec);
        used.printSecForm();
        break;
    case 2:
        //действие перевод из ФОРМАТА В СЕКУНДЫ
        cout << "Enter time in format HH:MM:SS = ";
        cin>>strFormatGet;
        used.strGet(strFormatGet);
        cout << used.GettoConsole();

        break;
    default:
        cout << "Error";
        break;
    }
}

