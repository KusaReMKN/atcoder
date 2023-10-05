#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> b(m);
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		b[a-1]++;
	}
	std::cout << *std::max_element(b.begin(), b.end()) << std::endl;

	return 0;
}
