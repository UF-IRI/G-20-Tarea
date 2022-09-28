#include "gmock/gmock.h"

#include "Funciones.cpp" //escribiendo Funciones.h nos marca error.

using namespace testing;

namespace foobar::tests
{
	TEST(Funciones, DistTest) {
		ASSERT_FLOAT_EQ(dist(3.0, 1.0, 2.0, 1.0), 1.0); //testeamos la funcion para la distancia.
	} 
	TEST(Funciones, AreaTest) {
		ASSERT_DOUBLE_EQ(area(1.0), 3.141516); //testeamos la funcion para el area de un circulo.
	}
}
