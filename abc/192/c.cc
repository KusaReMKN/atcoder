#include<bits/stdc++.h>

int g1(int x)
{
	std::string s = std::to_string(x);
	std::sort(s.begin(), s.end(), std::greater<char>());
	return std::stoi(s);
}

int g2(int x)
{
	std::string s = std::to_string(x);
	std::sort(s.begin(), s.end());
	return std::stoi(s);
}

int f(int x) { return g1(x) - g2(x); }

int main(void)
{
	int n, k;
	std::cin >> n >> k;
	for (int i = 0; i < k; i++) n = f(n);
	std::cout << n << std::endl;
	return 0;
}
