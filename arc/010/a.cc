#include <iostream>

int
main(void)
{
	int n, m, a, b;
	int c;

	std::cin >> n >> m >> a >> b;
	for (int i = 0; i < m; i++) {
		if (n <= a)
			n += b;
		std::cin >> c;
		n -= c;
		if (n < 0) {
			std::cout << i+1 << std::endl;
			return 0;
		}
	}
	std::cout << "complete" << std::endl;

	return 0;
}
