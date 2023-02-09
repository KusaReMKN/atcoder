#include <iostream>
#include <vector>

int
main(void)
{
	long n;
	std::cin >> n;

	std::vector<long> fib = { 0, 1 };
	while (fib.back() < n) {
		std::clog << fib.back() << " ";
		auto end1 = fib.end();
		auto end2 = fib.end();
		end1--, end2--, end2--;
		fib.push_back(*end1 + *end2);
	}
	std::clog << fib.back() << std::endl;

	int cnt = 0;
	while (n > 0) {
		for (auto itr = fib.rbegin(); itr != fib.rend(); itr++)
			if (*itr <= n) {
				n -= *itr;
				cnt++;
				break;
			}
	}
	std::cout << cnt << std::endl;

	return 0;
}
