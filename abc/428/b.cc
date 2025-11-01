#include <iostream>
#include <map>
#include <set>
#include <string>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::string s;
	std::cin >> s;

	std::map<std::string, int> m;
	for (int i = 0; i < n-k+1; i++)
		m[s.substr(i, k)]++;

	int max = m.begin()->second;
	for (const auto e: m)
		if (e.second > max)
			max = e.second;

	std::set<std::string> ss;
	for (const auto e: m)
		if (e.second == max)
			ss.insert(e.first);

	std::cout << max << std::endl;
	for (const auto e: ss)
		std::cout << e << " ";
	std::cout << std::endl;

	return 0;
}
