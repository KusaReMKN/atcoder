#include <iostream>
#include <numeric>
#include <vector>

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	std::vector<int> at(n+1);
	std::iota(at.begin(), at.end(), 0);
	std::vector<int> cnt(n+1, 1);
	int dup = 0;
	for (int i = 0; i < q; i++) {
		int f, p, h;
		std::cin >> f;
		switch (f) {
		case 1:
			std::cin >> p >> h;
			if (cnt[at[p]]-- >= 2 && cnt[at[p]] < 2)
				dup--;
			at[p] = h;
			if (cnt[at[p]]++ < 2 && cnt[at[p]] >= 2)
				dup++;
			break;
		case 2:
			std::cout << dup << std::endl;
			break;
		}
	}

	return 0;
}
