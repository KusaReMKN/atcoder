#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int
main(void)
{
	std::vector<bool> v(10, false);

	for (int i = 0; i < 10; i++) {
		std::string p;
		std::cin >> p;

		for (int j = 0; j < 10; j++)
			v[j] = v[j] | (p[j] == 'o');
	}

	auto res = std::reduce(v.begin(), v.end(), true, std::logical_and<>());
	std::cout << (res ? "Yes" : "No") << std::endl;

	return 0;
}
