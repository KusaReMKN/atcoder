#include <bits/stdc++.h>

int main(void)
{
	int n, k, d;

	std::cin >> n >> k;
	std::map<int, bool> sunuke;

	for (int i = 0; i < k; i++) {
		int d;
		std::cin >> d;
		for (int j = 0; j < d; j++) {
			int tmp;
			std::cin >> tmp;
			sunuke[tmp] = true;
		}
	}

	std::cout << (n - sunuke.size()) << std::endl;

	return 0;
}
