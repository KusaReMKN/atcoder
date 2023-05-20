#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::string> s(n);
	for (auto &e: s)
		std::cin >> e;

	std::vector<int> ind(n);
	for (int i = 0; i < n; i++)
		ind[i] = i;

	int can = 0;
	do {
		std::string prev = s[ind[0]];
		int ok = 1;
		for (int i = 1; i < n; i++) {
			int diff = 0;
			for (int j = 0; j < m; j++)
				if (s[ind[i]][j] != prev[j])
					diff++;
			if (diff != 1) {
				ok = 0;
				break;
			}
			prev = s[ind[i]];
		}
		if (ok) {
			can = 1;
			break;
		}
	} while (std::next_permutation(ind.begin(), ind.end()));
	std::cout << (can ? "Yes" : "No") << std::endl;

	return 0;
}
