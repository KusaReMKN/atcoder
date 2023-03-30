#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<bool> v(n+1, false);
	for (int i = 1; i <= n; i++) {
		int a;
		std::cin >> a;

		if (!v[i])
			v[a] = true;
	}

	std::vector<int> res;
	for (int i = 1; i <= n; i++)
		if (!v[i])
			res.push_back(i);

	std::cout << res.size() << std::endl;
	for (const auto &e: res)
		std::cout << e << " ";
	std::cout << std::endl;

	return 0;
}
