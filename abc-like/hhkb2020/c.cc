#include <iostream>
#include <set>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	int min = 0;
	std::set<int> s;
	for (int i = 0; i < n; i++) {
		int p;
		std::cin >> p;
		s.insert(p);
		while (s.count(min))
			min++;
		std::cout << min << std::endl;
	}

	return 0;
}
