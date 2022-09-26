#include "gmock/gmock.h"
#include "example.h"
#include "Funciones.h"

using namespace testing;

namespace foobar::tests
{
	/*
	TEST(ExampleTests, Example) {
		foobar::Example example{};
        ASSERT_THAT(example.getValue(), Eq(99));
	}
	*/
	TEST(Funciones, DistTest){
		ASSERT_THAT(dist(3, 1, 2, 1), Eq(1));
	}
	TEST(Funciones, AreaTest){
		ASSERT_THAT(area(1), Eq(3.141516));
	}
}
