#include <iostream>
#include "lab2*.h"

using namespace std;

VectorR3::VectorR3() {
    x = 0;
    y = 0;
    z = 0;
}

VectorR3::VectorR3(const float &a, const float &b, const float &c){
    x = a;
    y = b;
    z = c;
}

VectorR3::VectorR3(const vector<float> &v) {
    x = v[0];
    y = v[1];
    z = v[2];
}


void VectorR3::setX(const float &a) {
    x = a;
}

void VectorR3::setY(const float &b) {
    y = b;
}

void VectorR3::setZ(const float &c) {
    z = c;
}

void VectorR3::setXYZ(const float &a, const float &b, const float &c) {
    x = a;
    y = b;
    z = c;
}


float VectorR3::getX() {
    return x;
}

float VectorR3::getY() {
    return y;
}

float VectorR3::getZ() {
    return z;
}


VectorR3 VectorR3::sumVectors(const VectorR3 &r1, const VectorR3 &r2) {
    VectorR3 v_res;
    v_res.x = r1.x + r2.x;
    v_res.y = r1.y + r2.y;
    v_res.z = r1.z + r2.z;
    return v_res;
}

VectorR3 VectorR3::subVectors(const VectorR3 &r1, const VectorR3 &r2) {
    VectorR3 v_res;
    v_res.x = r1.x - r2.x;
    v_res.y = r1.y - r2.y;
    v_res.z = r1.z - r2.z;
    return v_res;
}

float VectorR3::lenVectors(const VectorR3 &r1) {
    return sqrt(pow(r1.x,2) + pow(r1.y,2) + pow(r1.z,2));
}

float VectorR3::angleVector(const VectorR3 &r1, const VectorR3 &r2) {
    float dot = r1.x * r2.x +r1.y * r2.y + r1.z * r2.z;
    return acos(dot/(lenVectors(r1)* lenVectors(r2))) * 57.3248;
}

void VectorR3::output(VectorR3 r1) {
    cout << "(" << r1.x << "," << r1.y << "," << r1.z << ")";
}
