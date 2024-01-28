#include <iostream>
#include <map>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	std::map<char, int> m;
	for (const auto &c: s)
		m[c]++;

	int max = 0;
	char ind;
	for (const auto &e: m)
		if (max < e.second) {
			ind = e.first;
			max = e.second;
		}
	std::cout << ind << std::endl;

	return 0;
}
