#include "gmock/gmock.h"

#include "Funciones.cpp" //escribiendo Funciones.h nos marca error.

using namespace testing;

namespace foobar::tests
{
	/*
	TEST(ExampleTests, Example) {
		foobar::Example example{};
		ASSERT_THAT(example.getValue(), Eq(99));
	}
	*/
	TEST(Funciones, DistTest) {
		ASSERT_THAT(dist(3.0, 1.0, 2.0, 1.0), 1.0);
	}
	TEST(Funciones, AreaTest) {
		ASSERT_THAT(area(1.0), 3.141516);
	}
}
