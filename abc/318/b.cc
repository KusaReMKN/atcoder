#include <iostream>
#include <set>
#include <utility>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::set<std::pair<int, int>> s;
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		std::cin >> a >> b >> c >> d;

		for (int y = c; y < d; y++)
			for (int x = a; x < b; x++)
				s.insert(std::pair(x, y));
	}
	std::cout << s.size() << std::endl;

	return 0;
}
