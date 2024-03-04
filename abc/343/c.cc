#include <algorithm>
#include <iostream>
#include <string>

int
main(void)
{
	unsigned long int n;
	std::cin >> n;

	std::string ans;
	for (unsigned long int i = 1; i*i*i <= n; i++) {
		auto x = i*i*i;
		auto s = std::to_string(x);
		auto t = s;
		std::ranges::reverse(t);
		if (t == s)
			ans = t;
	}
	std::cout << ans << std::endl;

	return 0;
}
