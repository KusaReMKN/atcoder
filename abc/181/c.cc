#include <iostream>
#include <array>
#include <cmath>

#define isonline(x1, y1, x2, y2, x3, y3) ((x2-x1)*(y3-y1)==(x3-x1)*(y2-y1))

int main(void)
{
	int n;
	std::array<int, 100> x, y;

	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> x[i] >> y[i];

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++)
				if (isonline(x[i], y[i], x[j], y[j], x[k], y[k]))
					return std::puts("Yes"), 0;
	std::puts("No");

	return 0;
}
