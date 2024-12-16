#include <iostream>
#include <map>
#include <set>
#include <string>

int
main(void)
{
	int v[5];
	for (int i = 0; i < 5; i++)
		std::cin >> v[i];

	std::map<int, std::set<std::string>> m;
	for (int i = 1; i <= 31; i++) {
		int point = 0;
		std::string name = "";
		for (int j = 0; j < 5; j++)
			if (i & 1<<j) {
				name.push_back("ABCDE"[j]);
				point += v[j];
			}
		m[point].insert(name);
	}

	for (auto itr = m.rbegin(); itr != m.rend(); itr++)
		for (const auto &s: itr->second)
			std::cout << s << std::endl;

	return 0;
}
