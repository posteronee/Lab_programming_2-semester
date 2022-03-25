#include "menu.h"
#include <iostream>
#include <locale>

Menu::Menu() {
    Number = 0;
    cout << "Введите номер команды:\n";
    cout << "1 - сумма двух векторов\n";
    cout << "2 - разность двух векторов\n";
    cout << "3 - длина вектора\n";
    cout << "4 - угол между двумя векторами\n";
    cout << "\n";
    cin >> Number;
}

void Menu::select(Menu settings) {
    VectorR3 r1, r2;
    float x, y, z;

    switch(settings.Number){

        case 1:
            cout << "Введите первый вектор\n";
            cin >> x >> y >> z;
            r1.setXYZ(x, y, z);

            cout << "Введите второй вектор\n";
            cin >> x >> y >> z;
            r2.setXYZ(x, y, z);

            cout << "Результат суммы:\n";
            VectorR3::output(VectorR3::sumVectors(r1, r2));
            break;


        case 2:
            cout << "Введите первый вектор\n";
            cin >> x >> y >> z;
            r1.setXYZ(x, y, z);

            cout << "Введите второй вектор\n";
            cin >> x >> y >> z;
            r2.setXYZ(x, y, z);

            cout << "Результат разности:\n";
            VectorR3::output(VectorR3::subVectors(r1, r2));
            break;


        case 3:
            cout << "Введите вектор\n";
            cin >> x >> y >> z;
            r1.setXYZ(x, y, z);

            cout << "Длина вектора =\n" << VectorR3::lenVectors(r1);
            break;


        case 4:
            cout << "Введите первый вектор\n";
            cin >> x >> y >> z;
            r1.setXYZ(x, y, z);

            cout << "Введите второй вектор\n";
            cin >> x >> y >> z;
            r2.setXYZ(x, y, z);

            cout << "Угол между двумя векторами = " << VectorR3::angleVector(r1,r2);
            break;


        default:
            cout << "Нет такой команды!\n";
            break;


    }

}