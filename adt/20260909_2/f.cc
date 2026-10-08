#include <deque>
#include <iostream>
#include <numeric>
#include <utility>

int
main(void)
{
	int t;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		int n, d;
		std::cin >> n >> d;

		std::deque<int> a(n), b(n);
		for (auto &e: a)
			std::cin >> e;
		for (auto &e: b)
			std::cin >> e;

		std::deque<int> q;
		for (int i = 0; i < n; i++) {
			q.push_back(i);
			q.push_back(a[i]);

			while (b[i] > 0) {
				auto d = q[0], r = q[1];
				q.pop_front(), q.pop_front();
				auto min = b[i] < r ? b[i] : r;
				b[i] -= min;
				r -= min;
				if (r > 0)
					q.push_front(r), q.push_front(d);
			}

			while (!q.empty() && i - q[0] >= d)
				q.pop_front(), q.pop_front();
		}

		int sum = 0;
		for (int i = 0; i < q.size(); i++)
			if (i % 2 > 0)
				sum += q[i];
		std::cout << sum << std::endl;
	}

	return 0;
}
