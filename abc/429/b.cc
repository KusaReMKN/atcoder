#include <iostream>
#include <set>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	int sum = 0;
	std::multiset<int> s;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		s.insert(a);
		sum += a;
	}
	std::cout << (s.count(sum-m) > 0 ? "Yes" : "No") << std::endl;

	return 0;
}
