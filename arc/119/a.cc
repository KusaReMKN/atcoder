#include <iostream>

int
main(void)
{
	unsigned long n;
	std::cin >> n;

	auto nn = n;
	int bb = 0;
	while (nn /= 2)
		bb++;
	std::clog << bb << std::endl;

	auto min = n;
	for (int b = 0; b <= bb; b++) {
		auto a = n / (1L << b);
		auto c = n % (1L << b);
		std::clog << a << ":" << b << ":" << c << std::endl;
		if (min > a+b+c)
			min = a+b+c;
	}
	std::cout << min << std::endl;

	return 0;
}
