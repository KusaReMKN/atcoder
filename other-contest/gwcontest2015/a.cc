#include <iostream>
#include <set>

int
main(void)
{
	int p[] = { 25, 39, 51, 76, 163, 111, 128, 133, 138 };	// without G

	std::set<int> pts;
	for (int i = 0; i < 1 << sizeof(p)/sizeof(p[0]); i++)
		for (int q = 0; q < 3; q++) {
			int qq[] = { 0, 58, 136 };
			int sum = qq[q];
			for (int j = 0; j < sizeof(p)/sizeof(p[0]); j++)
				if (i & 1<<j)
					sum += p[j];
			pts.insert(sum);
		}

	for (const auto &e: pts)
		std::cout << e << std::endl;

	return 0;
}
