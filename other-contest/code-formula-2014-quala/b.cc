#include <cstdio>
#include <iostream>
#include <vector>

int
main(void)
{
	int a, b;
	std::cin >> a >> b;

	std::vector<int> s(10, 0);
	for (int i = 0; i < a; i++) {
		int p;
		std::cin >> p;
		s[p % 10] = 1;
	}
	for (int i = 0; i < b; i++) {
		int q;
		std::cin >> q;
		s[q % 10] = 2;
	}

	auto ch = "x.o";
	std::printf("%c %c %c %c\n", ch[s[7]], ch[s[8]], ch[s[9]], ch[s[0]]);
	std::printf(" %c %c %c\n", ch[s[4]], ch[s[5]], ch[s[6]]);
	std::printf("  %c %c\n", ch[s[2]], ch[s[3]]);
	std::printf("   %c\n", ch[s[1]]);

	return 0;
}
