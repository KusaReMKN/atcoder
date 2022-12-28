#include <iostream>
#include <map>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<std::string, bool> used;
	std::string cur;
	std::cin >> cur;
	used[cur] = true;
	std::string prev = cur;
	for (int i = 1; i < n; i++) {
		std::cin >> cur;
		if (prev.back() != cur.front() || used[cur]) {
			std::cout << (i & 1 ? "WIN" : "LOSE") << std::endl;
			return 0;
		}
		used[cur] = true;
		prev = cur;
	}
	std::cout << "DRAW" << std::endl;

	return 0;
}
