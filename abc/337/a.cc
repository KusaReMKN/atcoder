#include <iostream>

int
main(void)
{
	int n;
	std::cin >> n;

	int xx, yy;
	xx = yy = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		std::cin >> x >> y;
		xx += x;
		yy += y;
	}
	if (xx == yy)
		std::cout << "Draw" << std::endl;
	else
		std::cout << (xx > yy ? "Takahashi" : "Aoki") << std::endl;

	return 0;
}
