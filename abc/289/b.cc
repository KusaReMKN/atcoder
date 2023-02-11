#include <iostream>
#include <set>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::set<int> a;
	for (int i = 0; i < m; i++) {
		int aa;
		std::cin >> aa;
		a.insert(aa);
	}

	std::vector<int> s;
	for (int i = 1; i <= n; i++) {
		if (a.count(i)) {
			s.push_back(i);
		} else {
			std::cout << i << " ";
			while (!s.empty()) {
				std::cout << s.back() << " ";
				s.pop_back();
			}
		}
	}
	std::cout << std::endl;

	return 0;
}
