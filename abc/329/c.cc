#include <algorithm>
#include <iostream>
#include <map>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	std::map<char, int> m;

	auto c0 = s[0];
	int len = 0;
	for (int i = 0; i < n; i++)
		if (s[i] == c0)
			m[c0] = std::max(m[c0], ++len);
		else
			m[c0 = s[i]] = std::max(m[s[i]], len = 1);

	int sum = 0;
	for (const auto &e: m)
		sum += e.second;
	std::cout << sum << std::endl;

	return 0;
}
