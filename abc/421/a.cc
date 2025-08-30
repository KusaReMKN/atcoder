#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::string> s(n);
	for (auto &e: s)
		std::cin >> e;

	int x;
	std::string y;
	std::cin >> x >> y;

	std::cout << (s[x-1] == y ? "Yes" : "No") << std::endl;

	return 0;
}
