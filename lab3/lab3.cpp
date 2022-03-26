#include "lab3.h"
#include <iostream>
using namespace std;

//2
void Square::setSide(const float &a) {
    side = a;
}

void Square::setAngle(const float &b) {
    angle = b;
}

void Square::setX(const float &c) {
    x = c;
}

void Square::setY(const float &d) {
    y = d;
}

void Square::setXYAngleSide(const float &a, const float &b, const float &c, const float &d) {
    side = a;
    angle = b;
    x = c;
    y = d;
}


float Square::getSide() {
    return side;
}

float Square::getAngle() {
    return angle;
}

float Square::getX() {
    return x;
}

float Square::getY() {
    return y;
}


bool operator == (Square S1 , Square S2){
    return (S1.side * S1.side == S2.side * S2.side);
};

bool operator != (Square S1 , Square S2){
    return (S1.side * S1.side != S2.side * S2.side);
};

bool operator > (Square S1 , Square S2){
    return (S1.side * S1.side > S2.side * S2.side);
};

bool operator < (Square S1 , Square S2){
    return (S1.side * S1.side < S2.side * S2.side);
};

void operator * (Square S1 , float a){
    S1.side *= a;
    // Старое значение * вещ. число (getSide), затем запись через setSide
    cout << S1.side;
}

void operator + (Square S1 , vector<float> a){
    S1.x += a[0];
    S1.y += a[1];
    cout << S1.x << " " << S1.y;
}



//8
Stack::Stack() {
    size = 0;
}

void Stack::pushElement(int a) {
    if (size >= 100){
        cout << "Стек переполнен\n";
    } else {
        stack.push_back(a); // push элементы в стек, пока он не наполнится
        size++;
    }
}

int Stack::popElement() {
    if (size <= 0){
        cout << "Стек пустой\n";
    } else {
        float a = stack[size - 1];
        stack.pop_back(); // pop элемент из стека
        size--;
        return a;
    }
    return 0;
}

void Stack::printStack() {
    for (int i = 0; i <= size - 1; i++){
        cout << stack[i] << " ";
    }
}


void operator << (Stack &st1, int number){
    st1.pushElement(number);
}

void operator >> (Stack &st1, int &pop){
    pop = st1.popElement();
}