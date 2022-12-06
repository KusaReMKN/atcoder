#include <iostream>

int
main(void)
{
	int n;
	int a0, a1;
	int cnt;

	std::cin >> n >> a0;
	cnt = 0;
	for (int i = 1; i < n; i++) {
		std::cin >> a1;
		if (a1 == a0)
			cnt++, a0 = -1;
		else
			a0 = a1;
	}
	std::cout << cnt << std::endl;

	return 0;
}
