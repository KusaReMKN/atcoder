#include <iostream>
#include <map>
#include <set>
#include <sstream>

int
main(void)
{
	int n;
	std::cin >> n;

	int q;
	std::cin >> q;

	std::map<int, std::map<int, int>> box;
	std::map<int, std::set<int>> card;
	for (int qq = 0; qq < q; qq++) {
		int f, i, j;
		std::cin >> f;
		switch (f) {
		case 1: {
			std::cin >> i >> j;
			card[i].insert(j);	/* card i is in box j */
			box[j][i]++;	/* box j gets new card i */
		}	break;
		case 2: {
			std::cin >> j;
			std::stringstream ss;
			for (const auto &e: box[j])
				for (int i = 0; i < e.second; i++)
					ss << e.first << " ";
			auto s = ss.str();
			s.pop_back();
			std::cout << s << std::endl;
		}	break;
		case 3: {
			std::cin >> i;
			std::stringstream ss;
			for (const auto &e: card[i])
				ss << e << " ";
			auto s = ss.str();
			s.pop_back();
			std::cout << s << std::endl;
		}	break;
		}
	}

	return 0;
}
