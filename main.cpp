#include <cstdio>
#include "factorial.h"

int main()
{
	printf("Calling factorial(%d) -> %d\n", 0, factorial(0));
	printf("Calling factorial(%d) -> %d\n", 1, factorial(1));
	printf("Calling factorial(%d) -> %d\n", 2, factorial(2));
	printf("Calling factorial(%d) -> %d\n", 3, factorial(3));
	printf("Calling factorial(%d) -> %d\n", 4, factorial(4));
	return 0;
}
