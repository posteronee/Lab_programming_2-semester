#ifndef PROGRAMMIROVANIE_LAB1_HEADER_H
#define PROGRAMMIROVANIE_LAB1_HEADER_H
#include <cmath>

//task 1
void Celaya_Chast (float *);
void Celaya_Chast (float &);

//task 2
void Smena_Znaka (float *);
void Smena_Znaka (int *);
void Smena_Znaka (float &);
void Smena_Znaka (int &);

//task 3
struct Circle
{
    int x ;
    int y ;
    int r ;
};

void Radius (Circle *);
void Radius (Circle &);

//task 4
struct Matrix
        {
    int a[3][3];
};

void Transpose (Matrix *);
void Transpose (Matrix &);







#endif
