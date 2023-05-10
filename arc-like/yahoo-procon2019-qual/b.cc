#include <iostream>
#include <set>

int
main(void)
{
	std::multiset<int> s;
	for (int i = 0; i < 3; i++) {
		int a, b;
		std::cin >> a >> b;
		s.insert(a);
		s.insert(b);
	}
	for (int i = 1; i <= 4; i++)
		if (s.count(i) > 2) {
			std::cout << "NO" << std::endl;
			return 0;
		}
	std::cout << "YES" << std::endl;

	return 0;
}
