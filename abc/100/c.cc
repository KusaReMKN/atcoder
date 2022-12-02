#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	long sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		while ((a & 1) == 0)
			sum++, a >>= 1;
	}
	std::cout << sum << std::endl;

	return 0;
}
