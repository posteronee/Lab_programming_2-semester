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

Square operator * (Square const&s, float a){
    Square s1{};
    s1.side = s.side * a;
    return s1;
}

Square operator+(const Square &s, vector<float> v) {
    Square s3{};
    s3.x = s.x + v[0];
    s3.y = s.y + v[1];
    return s3;
}

ostream &operator<<(ostream &out, const Square &s) {
    out << s.side;
    return out;
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