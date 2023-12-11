#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> v(8, 0);
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		v[a-1]++;
	}
	std::cout << *std::min_element(v.begin(), v.end()) << std::endl;

	return 0;
}
