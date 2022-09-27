#include <cstdlib>
#include <iostream>
#include "Funciones.h"
using namespace std;

int main(int argc, char** argv)
{
    float x1, y1, x2, y2;
    float distancia;
    float r;
    double a; //area del circulo

   cout << "Ingrese x1, y1, x2 e y2 respectivamente." << endl;
   cin >> x1 >> y1 >> x2 >> y2;
   distancia = dist(x1, y1, x2, y2);
   cout << "la distancia que hay entre los dos puntos es: " << distancia << endl;

   cout << "Ingrese el radio del circulo: " << endl;
   cin >> r;
   a = area(r);
   cout << "El area del circulo de radio " << r << " es: " << a << endl;

    return EXIT_SUCCESS;
}
