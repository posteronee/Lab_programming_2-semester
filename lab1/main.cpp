#include <iostream>
#include <locale>
#include "header.h"

using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");

    //task 1
    float FirstNumberPtr;
    cout << ("Введите вещественное число ");
    cin >> FirstNumberPtr;
    Celaya_Chast(&FirstNumberPtr);
    cout << FirstNumberPtr << endl;

    float FirstNumber;
    cout << ("Введите вещественное число ");
    cin >> FirstNumber;
    float &FirstNumberRef = FirstNumber;
    Celaya_Chast(FirstNumberRef);
    cout << FirstNumberRef << endl;



    //task 2
    float SecondNumberPtr;
    cout << ("Введите вещественное число");
    cin >> SecondNumberPtr;
    Smena_Znaka(&SecondNumberPtr);
    cout << SecondNumberPtr << endl;

    int ThirdNumberPtr;
    cout << ("Введите целое число");
    cin >> ThirdNumberPtr;
    Smena_Znaka(&ThirdNumberPtr);
    cout << ThirdNumberPtr << endl;

    float ForthNumber;
    cout << ("Введите вещественное число");
    cin >> ForthNumber;
    float &ForthNumberRef = ForthNumber;
    Smena_Znaka(ForthNumberRef);
    cout << ForthNumberRef << endl;

    int FifthNumber;
    cout << ("Введите целое число");
    cin >> FifthNumber;
    int &FifthNumberRef = FifthNumber;
    Smena_Znaka(FifthNumberRef);
    cout << FifthNumberRef << endl;


    //task 3
    Circle a;
    a.x = 10;
    a.y = 10;
    a.r = 10;
    Radius (&a);
    cout << ("Радиус") << " " ;
    cout << a.r << endl;

    Circle b;
    b.x = 10;
    b.y = 10;
    b.r = 10;
    Circle &cRef = b;
    Radius(cRef);
    cout << ("Радиус") << " " ;
    cout << a.r << endl;


    //task 4
    Matrix m;
    m.a[0][0] = 1;
    m.a[0][1] = 2;
    m.a[0][2] = 3;
    m.a[1][0] = 4;
    m.a[1][1] = 5;
    m.a[1][2] = 6;
    m.a[2][0] = 7;
    m.a[2][1] = 8;
    m.a[2][2] = 9;
    cout << "Указатель" << endl;
    cout << "\n";
    cout << m.a[0][0] << " " << m.a[0][1] << " " << m.a[0][2] << endl;
    cout << m.a[1][0] << " " << m.a[1][1] << " " << m.a[1][2] << endl;
    cout << m.a[2][0] << " " << m.a[2][1] << " " << m.a[2][2] << endl;
    cout << "\n";
    Transpose(m);
    cout << m.a[0][0] << " " << m.a[0][1] << " " << m.a[0][2] << endl;
    cout << m.a[1][0] << " " << m.a[1][1] << " " << m.a[1][2] << endl;
    cout << m.a[2][0] << " " << m.a[2][1] << " " << m.a[2][2] << endl;
    cout << "\n";

    cout << "Ссылка" << endl;
    cout << "\n";
    Matrix m2;
    m2.a[0][0] = 1;
    m2.a[0][1] = 2;
    m2.a[0][2] = 3;
    m2.a[1][0] = 4;
    m2.a[1][1] = 5;
    m2.a[1][2] = 6;
    m2.a[2][0] = 7;
    m2.a[2][1] = 8;
    m2.a[2][2] = 9;
    cout << m2.a[0][0] << " " << m2.a[0][1] << " " << m2.a[0][2] << endl;
    cout << m2.a[1][0] << " " << m2.a[1][1] << " " << m2.a[1][2] << endl;
    cout << m2.a[2][0] << " " << m2.a[2][1] << " " << m2.a[2][2] << endl;
    cout << "\n";
    Matrix &m3Ref = m2;
    Transpose(m3Ref);
    cout << m2.a[0][0] << " " << m2.a[0][1] << " " << m2.a[0][2] << endl;
    cout << m2.a[1][0] << " " << m2.a[1][1] << " " << m2.a[1][2] << endl;
    cout << m2.a[2][0] << " " << m2.a[2][1] << " " << m2.a[2][2] << endl;
    return 0;
}
