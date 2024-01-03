#include <cstdio>
#include <iostream>

int
main(void)
{
	int r1, r2;
	std::cin >> r1 >> r2;

	std::printf("%.9f\n", (double)(r1 * r2) / (r1 + r2));

	return 0;
}
