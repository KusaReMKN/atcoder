#include <deque>
#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::string s;
	std::cin >> s;

	std::vector<int> c(n);
	for (auto &e: c)
		std::cin >> e;

	std::vector<std::deque<char>> v(m);
	for (int i = 0; i < n; i++)
		v[c[i]-1].push_back(s[i]);
	for (auto &e: v)
		e.push_front(e.back()), e.pop_back();

	for (const auto &e: c) {
		std::cout << v[e-1][0];
		v[e-1].pop_front();
	}
	std::cout << std::endl;

	return 0;
}
