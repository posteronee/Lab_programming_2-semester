
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

};

bool operator == (Square S1 , Square S2);
bool operator != (Square S1 , Square S2);
bool operator > (Square S1 , Square S2);
bool operator < (Square S1 , Square S2);

void operator * (Square S1 , float a);

void operator + (Square S1 , vector<float> a);



//8
class Stack{

private:
    vector<int> stack;
    size_t size = 0;

public:
    Stack();
    size_t getSize();
    void pushElement(int a);
    int popElement();
    void printStack();

};

void operator << (Stack &st1, int number);

void operator >> (Stack &st1, int &pop);

#endif //LAB3_LAB3_H
