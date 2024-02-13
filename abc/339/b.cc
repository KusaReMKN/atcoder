#include <iostream>
#include <string>
#include <utility>
#include <vector>

int
main(void)
{
	int h, w, n;
	std::cin >> h >> w >> n;

	std::vector m(h, std::string(w, '.'));

	int dx = 0, dy = -1;
	int px = 0, py = 0;
	for (int i = 0; i < n; i++) {
		std::swap(dx, dy);
		if (m[py][px] == '.')
			dx = -dx;
		else
			dy = -dy;
		m[py][px] ^= '.' ^ '#';
		px += dx;
		py += dy;

		px = (px + w) % w;
		py = (py + h) % h;
	}

	for (const auto &r: m)
		std::cout << r << std::endl;

	return 0;
}
