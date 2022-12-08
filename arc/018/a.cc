#include <iomanip>
#include <iostream>

int
main(void)
{
	double height, bmi;
	double weight;

	std::cin >> height >> bmi;
	height /= 100.0;
	std::cout << std::fixed << std::setprecision(9)
		<< height * height * bmi << std::endl;

	return 0;
}
