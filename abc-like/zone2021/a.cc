#include <bits/stdc++.h>

int main(void)
{
	int res = 0;
	const char *p;
	std::string s;

	std::cin >> s;
	for (p = s.c_str(); p = std::strstr(p, "ZONe"); p++) res++;
	std::cout << res << std::endl;

	return 0;
}
