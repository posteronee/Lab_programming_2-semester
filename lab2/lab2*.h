#ifndef LAB2*_LAB2*_H
#define LAB2*_LAB2*_H
#include <cmath>
#include <vector>
using namespace std;

class VectorR3{
private:
    float x;
    float y;
    float z;

public:
    VectorR3(); // конструктор по умолчанию
    VectorR3(const float &a , const float &b, const float &c); // конструтор 3 вещественных чисел
    VectorR3(const vector<float> &v); // конструктор вектора

    void setX(const float &a);
    void setY(const float &b);
    void setZ(const float &c);
    void setXYZ(const float &a, const float &b, const float &c);

    float getX();
    float getY();
    float getZ();

    static VectorR3 sumVectors(const VectorR3 &r1, const VectorR3 &r2);
    static VectorR3 subVectors(const VectorR3 &r1, const VectorR3 &r2);
    static float lenVectors(const VectorR3 &r1);
    static float angleVector(const VectorR3 &r1, const VectorR3 &r2);
    static void output(VectorR3 r1);


};
#endif //LAB2*_LAB2*_H
