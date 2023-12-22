#include <iostream>

int
main(void)
{
	int n, x, y, z;
	std::cin >> n >> x >> y >> z;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;
		if (a >= x && b >= y && a+b >= z)
			cnt++;
	}
	std::cout << cnt << std::endl;

	return 0;
}
