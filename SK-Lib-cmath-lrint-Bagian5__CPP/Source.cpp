#include <iostream>
#include <cmath>
#include <cfenv>
#include <conio.h>

using namespace std;

/*
    Source by Programis
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    double x = 11.87;
    long int hasil;
    hasil = lrint(x);
    cout << "Rounding to-nearest (" << x << ") = " << hasil << endl;

    x = 11.5;
    hasil = lrint(x);
    cout << "Rounding to-nearest (" << x << ") = " << hasil << endl;

    fesetround(FE_DOWNWARD);
    x = 11.87;
    hasil = lrint(x);
    cout << "Rounding downward (" << x << ") = " << hasil << endl;

    fesetround(FE_UPWARD);
    x = 33.32;
    hasil = lrint(x);
    cout << "Rounding upward (" << x << ") = " << hasil << endl;

    _getch();
    return 0;
}