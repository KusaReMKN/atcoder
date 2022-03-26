#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int h, w;
	int a[100][100] = {{ 0 }};
	int min = 999;
	long int res = 0;

	cin >> h >> w;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> a[i][j];
			if (min > a[i][j]) min = a[i][j];
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			res += a[i][j] - min;
		}
	}

	cout << res << endl;
	return 0;
}
