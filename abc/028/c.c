#include <cstdio>
#include <iostream>
#include <set>

static int
bits(int n)
{
	n =    (n & 0x55555555) + (n >>  1 & 0x55555555);
	n =    (n & 0x33333333) + (n >>  2 & 0x33333333);
	n =    (n & 0x0f0f0f0f) + (n >>  4 & 0x0f0f0f0f);
	n =    (n & 0x00ff00ff) + (n >>  8 & 0x00ff00ff);
	return (n & 0x0000ffff) + (n >> 16 & 0x0000ffff);
}

int
main(void)
{
	int v[5];
	std::scanf("%d%d%d%d%d", &v[0], &v[1], &v[2], &v[3], &v[4]);

	std::set<int> s;
	for (int i = 0; i < 1 << 6; i++) {
		if (bits(i) != 3)
			continue;
		int sum = 0;
		for (int j = 0; j < 5; j++)
			if (i & (1 << j))
				sum += v[j];
		s.insert(sum);
	}

	auto tail = s.rbegin();
	tail++, tail++;
	std::cout << *tail << std::endl;

	return 0;
}
