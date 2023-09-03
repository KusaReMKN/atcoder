#include <iostream>

int
main(void)
{
	int n, m, p;
	std::cin >> n >> m >> p;

	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if ((i - m) % p == 0)
			cnt++;
	std::cout << cnt << std::endl;

	return 0;
}
