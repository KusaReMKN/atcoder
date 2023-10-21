#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> v(24);
	for (int i = 0; i < n; i++) {
		int w, x;
		std::cin >> w >> x;

		for (int j = 9; j < 18; j++)
			v[(x+j)%24] += w;
	}
	std::cout << *std::max_element(v.begin(), v.end()) << std::endl;

	return 0;
}
