#include <iostream>
#include <set>
#include <string>

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	std::string s;
	std::cin >> s;
	s += "##";

	std::set<int> z;
	for (int i = 0; i+2 < s.size(); i++)
		if (s[i+0] == 'A' && s[i+1] == 'B' && s[i+2] == 'C')
			z.insert(i);

	for (int i = 0; i < q; i++) {
		int x;
		char c;
		std::cin >> x >> c;

		if (s[x-1] == c)
			goto nop;

		if (s[x-1] == 'A' || s[x-1] == 'B' || s[x-1] == 'C')
			z.erase(x-1 - (s[x-1]-'A'));

		s[x-1] = c;
		if (x-1 - (c-'A') >= 0
				&& s[x-1+0 - (c-'A')] == 'A'
				&& s[x-1+1 - (c-'A')] == 'B'
				&& s[x-1+2 - (c-'A')] == 'C')
			z.insert(x-1 - (c-'A'));
nop:
		std::cout << z.size() << std::endl;
	}

	return 0;
}
