#include "Funciones.h"

float dist(float x1, float y1, float x2, float y2)
{
    float x=x2-x1;
    float y=y2-y1;
    float distancia=sqrt(x*x+y*y);
    return (distancia);
}

float area(float r)
{
    float pi=3.141516;
    float area=pi*(r*r);
    return (area);
}