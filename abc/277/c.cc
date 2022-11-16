#include <deque>
#include <iostream>
#include <map>
#include <set>
#include <vector>

int
main(void)
{
	int n, a, b;
	std::map<int, std::vector<int>> map;
	std::deque<int> queue;
	std::set<int> checked;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		map[a].push_back(b);
		map[b].push_back(a);
	}
	queue.push_back(1);
	checked.insert(1);
	while (!queue.empty()) {
		auto elem = queue[0];
		queue.pop_front();
		for (auto next: map[elem])
			if (checked.count(next) == 0) {
				queue.push_back(next);
				checked.insert(next);
			}
	}
	std::cout << *checked.rbegin() << std::endl;

	return 0;
}
