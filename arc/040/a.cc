#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::string> s(n);
	for (auto &r: s)
		std::cin >> r;

	int red = 0;
	int blue = 0;
	for (const auto &r: s)
		for (const auto &c: r)
			if (c == 'R')
				red++;
			else if (c == 'B')
				blue++;
	if (red == blue)
		std::cout << "DRAW";
	else if (red < blue)
		std::cout << "AOKI";
	else
		std::cout << "TAKAHASHI";
	std::cout << std::endl;

	return 0;
}
