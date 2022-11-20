#include <iostream>
#include <unordered_map>
#include <vector>

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	std::unordered_map<int, std::vector<int>> m;
	for (int i = 1; i <= n; i++) {
		int a;
		std::cin >> a;
		m[a].push_back(i);
	}
	for (int i = 0; i < q; i++) {
		int x, k;
		std::cin >> x >> k;
		std::cout << (m[x].size() < k ? -1 : m[x][k-1]) << std::endl;
	}

	return 0;
}
