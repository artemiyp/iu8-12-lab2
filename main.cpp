// Московский государственный технический университет им. Н.Э. Баумана (МГТУ им. Н.Э. Баумана)
// Кафедра «Информационная безопасность» (ИУ8)
// Петросян А.Р.
// ИУ8-12
// Лабораторная работа №2
 
#include <math.h>
#include <iostream>

using namespace std;
int main()
{
    double a;
    cout << "Введите число a: ";
    cin >> a;
    double x = a;
    double xn, xn1;
    int k = 0;
    for (int i = 2; i <= 6; i++) {
        double e = M_E;
        do
        {
            k++;
            xn = x;
            xn1 = ((xn+2*sqrt((a/xn)))/3);
            x = xn1;
        } while (abs(xn1 - xn) >= e);
        cout << "E = 10^-" << i <<", количество итераций: " << k << endl;
    }
    double x1 = pow(a, 1.0/3);
    cout << "Вычисление: x = " << x1 << endl;
}
