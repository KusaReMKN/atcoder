#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int v, w, x, y, z;
		std::cin >> v >> w >> x >> y >> z;
		if (v + w + x + y + z < 20)
			sum++;
	}
	std::cout << sum << std::endl;

	return 0;
}
