#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;

		if ((a & 1) == 0)
			std::cout << a << " ";
	}
	std::cout << std::endl;

	return 0;
}
