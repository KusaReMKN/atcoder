#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::pair<int, int>> m(n);
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		m[i].second = i+1;
		for (int j = i+1; j < n; j++)
			m[s[j] == 'x' ? i : j].first++;
	}
	std::sort(m.begin(), m.end());

	for (int i = 0; i < n; i++)
		std::cout << (i ? " " : "") << m[i].second;
	std::cout << std::endl;

	return 0;
}
