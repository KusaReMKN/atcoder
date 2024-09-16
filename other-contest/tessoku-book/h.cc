#include <iostream>
#include <vector>

int
main(void)
{
	int h, w;
	std::cin >> h >> w;

	std::vector<std::vector<int>> s(h+1, std::vector<int>(w+1, 0));
	for (int i = 1; i <= h; i++)
		for (int j = 1; j <= w; j++) {
			int x;
			std::cin >> x;
			s[i][j] = s[i-1][j] + s[i][j-1] + x - s[i-1][j-1];
		}

	int q;
	std::cin >> q;

	for (int i = 0; i < q; i++) {
		int a, b, c, d;
		std::cin >> a >> b >> c >> d;
		std::cout << s[c][d] - s[a-1][d] - s[c][b-1] + s[a-1][b-1] << std::endl;
	}

	return 0;
}
