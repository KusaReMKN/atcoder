#include <iomanip>
#include <iostream>

int
main(void)
{
	int n, d, h;
	std::cin >> n >> d >> h;

	std::cout << std::fixed << std::setprecision(9);
	std::clog << std::fixed << std::setprecision(9);
	double max = 0.0;
	for (int i = 0; i < n; i++) {
		int dd, hh;
		std::cin >> dd >> hh;

		double test = (double)(h - hh) / (d - dd) * -dd + hh;
		std::clog << test << std::endl;
		if (test > max)
			max = test;
	}
	std::cout << max << std::endl;

	return 0;
}
