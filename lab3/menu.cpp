#include "menu.h"
#include <iostream>

Menu::Menu() {
    Number = 0;
    cout << "Введите номер команды:\n";
    cout << "Команды по 2 задаче:\n";
    cout << "1 - оператор равенства\n";
    cout << "2 - оператор умножение\n";
    cout << "3 - оператор прибавления\n";
    cout << "Команды по 8 задаче:\n";
    cout << "4 - оператор push и pop\n";

    cout << "\n";
    cin >> Number;
}

void Menu::choice() {

    //2
    Square s1,s2;
    float side;
    float angle;
    float x,y;
    float s;
    float input;
    vector<float> v1;

    //8
    Stack st1;
    int pop_number;

    switch(Number){

        case 1:
            cout << "Введите сторону первого квадрата\n";
            cin >> side;
            s1.setSide(side);
            cout << "Введите сторону второго квадрата\n";
            cin >> side;
            s2.setSide(side);
            if (s1 == s2){
                cout << "Площадь S1 равна площади S2";
            } else if (s1 > s2){
                cout << "Площадь S1 больше площади S2";
            } else cout << "Площадь S1 меньше площади S2";
            break;

        case 2:
            cout << "Введите сторону квадрата\n";
            cin >> side;
            s1.setSide(side);
            cout << "Введите вещественное число\n";
            cin >> s;
            s1 * s;
            break;

        case 3:
            cout << "Введите координаты вершины квадрата\n";
            cin >> x >> y;
            s1.setX(x);
            s1.setY(y);
            cout << "Введите вектор смещения\n";
            for (int i = 0; i <= 1; i++){
                cin >> input;
                v1.push_back(input);
            }
            s1 + v1;
            break;

        case 4:
            size_t n;
            int num;
            cout << "Введите количество чисел\n";
            cin >> n;
            cout << "Заполните стек\n";
            for (int i = 0; i <= n - 1; i++){
                cin >> num;
                st1 << num;
            }
            st1 >> pop_number; // вывод pop
            cout << pop_number << endl;
            st1.printStack(); //вывод стека
            break;


        default:
            cout << "Нет такой команды";
            break;
    }
}
