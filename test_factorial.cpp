#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Factorial test
#include <boost/test/unit_test.hpp>
#include "factorial.h"


BOOST_AUTO_TEST_CASE( test_if_it_returns_1_for_0 ) {
	BOOST_REQUIRE_EQUAL( factorial(0), 1 );
}

BOOST_AUTO_TEST_CASE( test_if_it_returns_1_for_1 ) {
	BOOST_REQUIRE_EQUAL( factorial(1), 1 );
}

BOOST_AUTO_TEST_CASE( test_if_it_returns_2_for_2 ) {
	BOOST_REQUIRE_EQUAL( factorial(2), 2 );
}

BOOST_AUTO_TEST_CASE( test_if_it_returns_6_for_3 ) {
	BOOST_REQUIRE_EQUAL( factorial(3), 6 );
}

BOOST_AUTO_TEST_CASE( test_if_it_returns_10_times_the_result_when_called_with_9 ) {
	BOOST_REQUIRE_EQUAL( factorial(9)*10, factorial(10) );
}

BOOST_AUTO_TEST_CASE( test_if_called_with_multiple_of_5_then_returns_multiple_of_10 ) {
	unsigned result = factorial(5);
	BOOST_REQUIRE_EQUAL( result % 10, 0 );
}
