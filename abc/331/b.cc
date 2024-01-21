#include <algorithm>
#include <iostream>

int
main(void)
{
	int n, s, m, l;
	std::cin >> n >> s >> m >> l;

	int min = 999999;
	for (int i = 0; ; i++) {
		for (int j = 0; ; j++) {
			for (int k = 0; ; k++) {
				if (6*i + 8*j + 12*k >= n) {
					min = std::min(min, s*i + m*j + l*k);
					break;
				}
			}
			if (6*i + 8*j >= n) {
				min = std::min(min, s*i + m*j);
				break;
			}
		}
		if (6*i >= n) {
			min = std::min(min, s*i);
			break;
		}
	}
	std::cout << min << std::endl;

	return 0;
}
