#include <deque>
#include <iostream>
#include <numeric>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::deque<int> q(2);
	std::cin >> q[0] >> q[1];
	for (int i = 2; i < n; i++) {
		int t;
		std::cin >> t;
		q.push_back(t);
		if (std::reduce(q.begin(), q.end()) < k) {
			std::cout << i+1 << std::endl;
			return 0;
		}
		q.pop_front();
	}
	std::cout << -1 << std::endl;

	return 0;
}
