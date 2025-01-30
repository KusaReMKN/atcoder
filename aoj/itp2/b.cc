#include <deque>
#include <iostream>

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	std::deque<std::deque<int>> queue(n);
	for (int i = 0; i < q; i++) {
		int f, t, x;
		std::cin >> f >> t;
		switch (f) {
		case 0:
			std::cin >> x;
			queue[t].push_back(x);
			break;
		case 1:
			if (queue[t].size() > 0)
				std::cout << queue[t][0] << std::endl;
			break;
		case 2:
			if (queue[t].size() > 0)
				queue[t].pop_front();
			break;
		}
	}

	return 0;
}
