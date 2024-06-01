#include <iostream>
#include <set>

int
main(void)
{
	int a, b;
	std::cin >> a >> b;

	std::set<int> s;
	for (int i = 1; i <= 100; i++)
		if (100 % i == 0)
			s.insert(i);

	for (int i = a; i <= b; i++)
		if (s.count(i) > 0) {
			std::cout << "Yes" << std::endl;
			return 0;
		}
	std::cout << "No" << std::endl;

	return 0;
}
