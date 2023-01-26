#include <iostream>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	int cnt = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (k > i+j && k - (i+j) <= n)
				cnt++;
	std::cout << cnt << std::endl;

	return 0;
}
