#include <iostream>
#include <set>

int
main(void)
{
	int n;
	std::cin >> n;

	std::set<int> s;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		s.insert(a);
	}
	for (const auto &e: s)
		if (s.count(e+3) && s.count(e+6)) {
			std::cout << "Yes" << std::endl;
			return 0;
		}
	std::cout << "No" << std::endl;

	return 0;
}
