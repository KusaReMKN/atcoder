#include <algorithm>
#include <iostream>

int
main(void)
{
	int n, a, b;
	std::cin >> n >> a >> b;

	int x, y, z;
	x = y = z = 0;
	for (int i = 0; i < n; i++) {
		int p;
		std::cin >> p;
		if (p <= a)
			x++;
		else if (p <= b)
			y++;
		else
			z++;
	}
	std::cout << std::min({ x, y, z }) << std::endl;

	return 0;
}
