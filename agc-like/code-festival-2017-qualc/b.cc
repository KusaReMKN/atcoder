#include <iostream>

int
main(void)
{
	int n, a;
	int cnt, m;
	std::cin >> n;

	cnt = 0;
	m = 1;
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		if ((a & 1) == 0)
			cnt++;
		m *= 3;
	}
	std::cout << m - (1 << cnt) << std::endl;

	return 0;
}
