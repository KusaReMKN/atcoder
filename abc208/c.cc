#include <bits/stdc++.h>

struct human {
	unsigned int number;
	unsigned long long int score;
};

int main(void)
{
	unsigned long long int n, k;
	std::cin >> n >> k;

	std::vector<struct human> a;
	for (unsigned i = 0; i < n; i++) {
		struct human temp = { 0 };
		std::cin >> temp.number;
		temp.score = 0;
		a.push_back(temp);
	}

	for (unsigned i = 0; i < n; i++)
		a[i].score = k / n;
	k %= n;

	std::vector<struct human *> ref;
	for (unsigned i = 0; i < n; i++)
		ref.push_back(&a[i]);
	std::sort(ref.begin(), ref.end(),
		[](struct human *a, struct human *b) {
			return a->number < b->number;
		});
	for (unsigned long i = 0; i < k; i++)
		ref[i]->score++;

	for (unsigned i = 0; i < n; i++)
		std::cout << a[i].score << std::endl;

	return 0;
}
