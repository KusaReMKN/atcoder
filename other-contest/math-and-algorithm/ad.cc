#include <iostream>
#include <set>

int
main(void)
{
	int n, x;
	std::cin >> n >> x;

	std::set<int> s;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		s.insert(a);
	}
	std::cout << (s.count(x) > 0 ? "Yes" : "No") << std::endl;

	return 0;
}
