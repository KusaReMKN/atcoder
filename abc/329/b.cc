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
	auto itr = s.rbegin();
	itr++;
	std::cout << *itr << std::endl;

	return 0;
}
