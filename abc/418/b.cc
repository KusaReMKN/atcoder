#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

inline static double
f(std::string const &t)
{
	std::size_t cnt = 0;
	for (const auto &c: t)
		if (c == 't')
			cnt++;
	return (cnt-2.0) / (t.size()-2);
}

int
main(void)
{
	std::string s;
	std::cin >> s;

	std::vector<std::string> ts;
	for (std::size_t h = 0; (h = s.find('t', h)) != std::string::npos; h++)
		for (std::size_t t = h+2; (t = s.find('t', t)) != std::string::npos; t++)
			ts.push_back(s.substr(h, t-h+1));

	double max = 0;
	for (const auto &t: ts)
		max = std::max(max, f(t));
	std::printf("%.9f\n", max);

	return 0;
}
