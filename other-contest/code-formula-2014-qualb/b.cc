#include <iostream>
#include <string>

int
main(void)
{
	std::string n;
	std::cin >> n;

	int cnt[2] = { 0 };
	int odd = 1;
	for (const auto &c: n) {
		cnt[1-odd] += c - '0';
		odd ^= 1;
	}
	std::cout << cnt[1-odd] << " " << cnt[1-odd^1] << std::endl;

	return 0;
}
