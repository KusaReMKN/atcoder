#include <iostream>
#include <set>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::vector<int>> v(n+1);
	for (int i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}

	std::vector<int> queue;
	for (auto elem: v[1])
		queue.push_back(elem);
	bool res = false;
	for (auto elem: queue)
		for (auto dest: v[elem])
			if (dest == n) {
				res = true;
				break;
			}
	std::cout << (res ? "POSSIBLE" : "IMPOSSIBLE") << std::endl;

	return 0;
}
