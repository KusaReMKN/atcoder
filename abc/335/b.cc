#include <iostream>
#include <set>
#include <tuple>

int
main(void)
{
	int n;
	std::cin >> n;

	std::set<std::tuple<int, int, int>> s;
	for (int i = 0; i <= n; i++)
		for (int j = 0; i+j <= n; j++)
			for (int k = 0; i+j+k <= n; k++)
				s.insert(std::make_tuple(i, j, k));
	for (const auto &e: s)
		std::cout << std::get<0>(e) << " " << std::get<1>(e) << " "
			<< std::get<2>(e) << std::endl;

	return 0;
}
