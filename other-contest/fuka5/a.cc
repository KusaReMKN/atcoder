#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, k;
loop:	std::cin >> n >> k;
	if (n == 0 && k == 0)
		return 0;

	std::vector<int> x(n);
	for (auto &e: x)
		std::cin >> e;
	std::sort(x.begin(), x.end());

	int sum = 0;
	for (int i = 0; i < k; i++)
		sum += x[i];
	std::cout << sum << std::endl;

	goto loop;
}
