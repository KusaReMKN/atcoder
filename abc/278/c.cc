#include <iostream>
#include <map>
#include <set>

int
main(void)
{
	int n, q;
	std::map<int, std::set<int>> m;

	std::cin >> n >> q;
	for (int i = 0; i < q; i++) {
		int t, a, b;

		std::cin >> t >> a >> b;
		switch (t) {
		case 1:
			m[a].insert(b);
			break;
		case 2:
			m[a].erase(b);
			break;
		case 3:
			std::cout <<
				(m[a].count(b) && m[b].count(a) ? "Yes" : "No")
				<< std::endl;
			break;
		}
	}

	return 0;
}
