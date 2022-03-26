
#ifndef LAB3_LAB3_H
#define LAB3_LAB3_H
#include <vector>
using namespace std;

//2
class Square{

private:

    float side; // Сторона квадрата
    float angle; // Угол поворота
    float x,y; // Координата левого верхнего угла

public:

    void setSide (const float &a);
    void setAngle (const float &b);
    void setX (const float &c);
    void setY (const float &d);
    void setXYAngleSide (const float &a, const float &b, const float &c, const float &d);

    float getSide();
    float getAngle();
    float getX();
    float getY();

    friend bool operator == (Square S1 , Square S2);
    friend bool operator != (Square S1 , Square S2);
    friend bool operator > (Square S1 , Square S2);
    friend bool operator < (Square S1 , Square S2);
    friend void operator * (Square S1 , float a);
    friend void operator + (Square S1 , vector<float> a);

};

//8
class Stack{

private:
    vector<int> stack;
    size_t size = 0;

public:
    Stack();
    void pushElement(int a);
    int popElement();
    void printStack();

    friend void operator << (Stack &st1, int number);
    friend void operator >> (Stack &st1, int &pop);

};



#endif //LAB3_LAB3_H
