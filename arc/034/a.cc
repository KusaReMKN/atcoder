#include <iomanip>
#include <iostream>

int
main(void)
{
	int n;
	int a, b, c, d, e;
	long sum, max;

	std::cin >> n;
	max = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b >> c >> d >> e;
		sum = (a + b + c + d) * 900L + e * 110L;
		std::clog << sum << std::endl;
		if (max < sum)
			max = sum;
	}
	std::cout << std::setprecision(9) << max / 900.0 << std::endl;

	return 0;
}
