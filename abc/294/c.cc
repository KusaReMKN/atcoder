#include <iostream>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	std::vector<int> b(m);
	for (auto &e: b)
		std::cin >> e;

	auto aitr = a.begin();
	auto bitr = b.begin();
	int cnt = 1;
	while (aitr != a.end() && bitr != b.end())
		if (*aitr < *bitr)
			*aitr++ = cnt++;
		else
			*bitr++ = cnt++;
	while (aitr != a.end())
		*aitr++ = cnt++;
	while (bitr != b.end())
		*bitr++ = cnt++;

	for (const auto &e: a)
		std::cout << e << " ";
	std::cout << std::endl;
	for (const auto &e: b)
		std::cout << e << " ";
	std::cout << std::endl;

	return 0;
}
