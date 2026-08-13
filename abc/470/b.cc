#include <algorithm>
#include <vector>
#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> m(n, 0);
	for (int i = 0; i < n; i++) {
		int c;
		std::cin >> c;
		m[c-1]++;
	}

	int max = *std::max_element(m.begin(), m.end());
	std::cout << n - max << std::endl;

	return 0;
}
