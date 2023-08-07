#include <iostream>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	int cnt = 0;
	for (const auto &c: s)
		if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
			cnt++;
	std::cout << cnt << std::endl;

	return 0;
}
