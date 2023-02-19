#include <iostream>
#include <set>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::set<int> s;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		s.insert(a);
	}

	int mex = 0;
	for (int i = 0; i < k; i++)
		if (s.count(i) != 0)
			mex = i+1;
		else
			break;
	std::cout << mex << std::endl;

	return 0;
}
