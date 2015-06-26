#include "factorial.h"
unsigned factorial(unsigned n) {
	if (n < 1 ) return 1;
	return n*factorial(n-1);
}
