#pragma once
#include <cmath>
#include <cstdlib>

#define pi 3.141516 //declaro pi como constante

float dist(float x1, float y1, float x2, float y2);
double area(float r);

namespace foobar
{
    struct Funciones
    {
        int getValue() const;
    };
}