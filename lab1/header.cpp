#include <cmath>
#include "header.h"
using namespace std;


//task1
void Celaya_Chast(float* a)
{
    *a = trunc(*a);
}

void Celaya_Chast(float &a)
{
    a = trunc(a);
}


//task2
void Smena_Znaka(float* a)
{
    *a = *a*(-1);
}

void Smena_Znaka(int* a)
{
    *a = *a*(-1);
}

void Smena_Znaka(float &a)
{
    a = a*(-1);
}

void Smena_Znaka(int &a)
{
    a = a*(-1);
}


//task 3
void Radius(Circle *a){
    a->r = (*a).r - 5;

}

void Radius(Circle &a){
    a.r = a.r - 5;
}


//task 4
void Transpose (Matrix *m)
{
    int t1,t2,t3;
    t1 = (*m).a[0][1];
    t2 = (*m).a[0][2];
    t3 = (*m).a[1][2];

    (*m).a[1][2] = (*m).a[2][1];
    (*m).a[0][1] = (*m).a[1][0];
    (*m).a[0][2] = (*m).a[2][0];

    (*m).a[1][0] = t1;
    (*m).a[2][0] = t2;
    (*m).a[2][1] = t3;
}

void Transpose (Matrix &m)
{
    int t1,t2,t3;
    t1 = m.a[0][1];
    t2 = m.a[0][2];
    t3 = m.a[1][2];

    m.a[0][1] = m.a[1][0];
    m.a[0][2] = m.a[2][0];
    m.a[1][2] = m.a[2][1];

    m.a[1][0] = t1;
    m.a[2][0] = t2;
    m.a[2][1] = t3;
}