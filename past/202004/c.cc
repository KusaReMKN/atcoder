#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::string> s(n);
	for (auto &r: s)
		std::cin >> r;

	for (auto itr = s.rbegin() + 1; itr != s.rend(); itr++) {
		auto s1 = *(itr - 1);
		for (int i = 1; i < 2 * (n-1); i++)
			if ((*itr)[i] == '#') {
				auto c = (s1[i-1] & s1[i] & s1[i+1]);
				(*itr)[i] = c == '#' ? '#' : 'X';
			}
	}
	for (const auto &r: s)
		std::cout << r << std::endl;

	return 0;
}
