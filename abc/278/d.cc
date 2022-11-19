#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<long> a(n+1);
	std::vector<int> last(n+1);
	for (int i = 1; i <= n; i++)
		std::cin >> a[i];

	int q;
	std::cin >> q;
	long last1x = -1;
	int lastn = 0;
	for (int i = 0; i < q; i++) {
		int t, j, x;
		std::cin >> t;
		switch (t) {
		case 1:
			std::cin >> last1x;
			lastn++;
			break;
		case 2:
			std::cin >> j >> x;
			if (last[j] == lastn)
				a[j] += x;
			else
				a[j] = x, last[j] = lastn;
			break;
		case 3:
			std::cin >> j;
			if (lastn == 0)
				std::cout << a[j] << std::endl;
			else {
				long tmp;
				if (lastn == last[j])
					tmp = (a[j] + last1x);
				else
					tmp = last1x;
				std::cout << tmp << std::endl;
			}
			break;
		}
	}

	return 0;
}
