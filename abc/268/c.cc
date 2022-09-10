#include <iostream>
#include <map>

static int
modN(int k, int n)
{
	k %= n;
	while (k < 0)
		k += n;
	return k;
}

int
main(void)
{
	int n, p[200000];
	std::map<int, int> mp;
	int index, max;
	int happy, tmp;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> p[i];
		mp[modN(p[i] - i - 1, n)]++;
		mp[modN(p[i] - i - 0, n)]++;
		mp[modN(p[i] - i + 1, n)]++;
	}
	index = -1;
	max = 0;
	for (auto itr = mp.begin(); itr != mp.end(); itr++)
		if (max < itr->second) {
			index = itr->first;
			max = itr->second;
		}
	happy = 0;
	for (int i = 0; i < n; i++) {
		for (int j = -1; j <= 1; j++) {
			tmp = modN(i+index+j, n);
			if (p[i] == tmp) {
				happy++;
				goto happyend;
			}
		}
happyend:	(void) 0;
	}
	std::cout << happy << std::endl;

	return 0;
}
