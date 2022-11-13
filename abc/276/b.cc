#include <iostream>
#include <set>

int
main(void)
{
	int n, m, a, b;
	std::set<int> s[100001];
	int l;

	std::cin >> n >> m;
	for (int i = 0; i < m; i++) {
		std::cin >> a >> b;
		s[a].insert(b);
		s[b].insert(a);
	}
	for (int i = 1; i <= n; i++) {
		std::cout << s[i].size();
		for (auto elem: s[i])
			std::cout << " " << elem;
		std::cout << std::endl;
	}

	return 0;
}
