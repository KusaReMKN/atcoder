#include <algorithm>
#include <iostream>
#include <string>

int
main(void)
{
	std::string oct = "wbwbwwbwbwbw";
	auto cw = std::ranges::count(oct, 'w');
	auto cb = std::ranges::count(oct, 'b');

	int w, b;
	std::cin >> w >> b;

	auto loop = std::min(w / cw, b / cb);
	w -= loop * cw;
	b -= loop * cb;

	for (int i = 0; i < oct.size(); i++) {
		std::ranges::rotate(oct, oct.begin() + 1);
		for (int j = 0; j < oct.size(); j++) {
			auto s = oct.substr(0, j+1);
			auto sw = std::ranges::count(s, 'w');
			auto sb = std::ranges::count(s, 'b');
			if (sw == w && sb == b) {
				std::cout << "Yes" << std::endl;
				return 0;
			}
		}
	}
	std::cout << "No" << std::endl;

	return 0;
}
