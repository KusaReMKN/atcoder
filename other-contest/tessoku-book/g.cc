#include <iostream>
#include <vector>

int
main(void)
{
	int d;
	std::cin >> d;

	std::vector<int> diff(d+2);
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int l, r;
		std::cin >> l >> r;
		diff[l]++;
		diff[r+1]--;
	}

	int cnt = 0;
	for (int i = 1; i <= d; i++)
		std::cout << (cnt += diff[i]) << std::endl;

	return 0;
}
