#include <deque>
#include <iostream>
#include <utility>

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	std::deque<std::pair<int, int>> s(n);
	for (int i = 0; i < n; i++)
		s[i] = std::make_pair(i+1, 0);

	for (int i = 0; i < q; i++) {
		int t;
		std::cin >> t;

		switch (t) {
		case 1: {
			char c;
			std::cin >> c;

			auto p0 = s[0];
			switch (c) {
			case 'R':
				p0.first++;
				break;
			case 'L':
				p0.first--;
				break;
			case 'U':
				p0.second++;
				break;
			case 'D':
				p0.second--;
				break;
			}
			s.pop_back();
			s.push_front(p0);
			break;
			}
		case 2: {
			int p;
			std::cin >> p;
			std::cout << s[p-1].first << " "
				<< s[p-1].second << std::endl;
			break;
			}
		}
	}

	return 0;
}
