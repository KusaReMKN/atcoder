#include <iostream>
#include <map>
#include <string>
#include <vector>

int
main(void)
{
	std::string s;
	std::cin >> s;

	std::map<char, std::vector<std::size_t>> m;
	for (auto i = 0; i < s.size(); i++)
		m[s[i]].push_back(i+1);

	for (const auto &e: m)
		if (e.second.size() == 1)
			std::cout << e.second[0] << std::endl;

	return 0;
}
