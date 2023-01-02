#include <iostream>
#include <cmath>

#define PI	(std::atan(1) * 4.0)

int
main(void)
{
	double r, d;

	std::cin >> r >> d;
	std::cout << std::fixed << r*r*PI * 2*d*PI << std::endl;

	return 0;
}
