#include <iostream>
#include <set>

int
main(void)
{
	int n, a;
	std::set<int> s;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		if (s.erase(a) == 0)
			s.insert(a);
	}
	std::cout << s.size() << std::endl;

	return 0;
}
