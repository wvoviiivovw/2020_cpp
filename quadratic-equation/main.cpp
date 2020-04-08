#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, x1, x2;
    cin >> a >> b >> c;
    if (a == 0) {//линейное уравнение 
        if (b != 0) {
            cout << -c / b;
        }
        else {
            cout << "No solutions";	//не имеет решений
        }
    }
    else {//квадратное уравнение
        d = ((b * b) - (4 * a * c));//расчет дискрименанта 
        if (d < 0) {
            cout << "no roots";	//нет действительных корней
        }
        else {
            if (d == 0) {//одинаковые корни
                x1 = x2 = -b / (2 * a);
                cout << x1;
            }
        else {//d>0  два корня
                    x1 = (-b + sqrt(d)) / (2 * a);
                    x2 = (-b - sqrt(d)) / (2 * a);
                    cout<<"x1 = " << x1<<"  " << "x2 = " << x2;
            }
        }
    }
}
