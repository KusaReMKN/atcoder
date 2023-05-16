#include <bitset>
#include <iostream>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;
	auto t = s;

	unsigned long n;
	std::cin >> n;

	for (auto &c: t)
		if (c == '?')
			c = '0';
	std::clog << t << std::endl;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '?')
			continue;
		t[i] = '1';
		std::clog << t << std::endl;

		std::bitset<61> bs(t);
		auto m = bs.to_ulong();
		t[i] = s[i] = n < m ? '0' : '1';
	}

	std::bitset<61> bs(s);
	auto res = bs.to_ulong();
	std::cout << (n < res ? -1L : (long)res) << std::endl;

	return 0;
}
