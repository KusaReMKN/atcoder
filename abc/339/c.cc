#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	long cur = 0;
	long geta = 0;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;

		cur += a;
		if (cur + geta < 0)
			geta = -cur;
	}
	std::cout << cur + geta << std::endl;

	return 0;
}
