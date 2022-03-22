#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int x;
	int gg = 0, g = 0;

	cin >> x;
	gg = x / 500;
	x %= 500;
	g = x / 5;
	cout << (gg * 1000 + g * 5) << endl;

	return 0;
}
