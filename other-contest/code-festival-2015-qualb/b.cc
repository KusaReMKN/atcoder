#include <iostream>
#include <map>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::map<int, int> s;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		s[a]++;
	}
	auto max = std::pair(0, 0);
	bool dup = false;
	for (const auto &e: s)
		if (e.second > max.second)
			max = e, dup = false;
		else if (e.second == max.second)
			dup = true;
	if (!dup && max.second*2 > n)
		std::cout << max.first;
	else
		std::cout << "?";
	std::cout << std::endl;

	return 0;
}
