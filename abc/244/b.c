main()
{
	int d, i, x, y;
	char t[100001];

	scanf("%*d%s", t);
	d = x = y = 0;
	for (i = 0; t[i]; i++) {
		switch (d) {
		case 0: t[i] == 'S' ? x++ : d++; break;
		case 1: t[i] == 'S' ? y-- : d++; break;
		case 2: t[i] == 'S' ? x-- : d++; break;
		case 3: t[i] == 'S' ? y++ : d++; break;
		}
		d &= 3;
	}

	printf("%d %d\n", x, y);
}
