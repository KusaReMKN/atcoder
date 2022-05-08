main()
{
	auto n, a, b;
	auto i, j, k, l;
	auto x[111][111];

	scanf("%d%d%d", &n, &a, &b);
	memset(x, 0, sizeof(x));
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			for (k = 0; k < a; k++)
				for (l = 0; l < b; l++)
					x[i*a+k][j*b+l] = ((i + j) & 1) + 1;
	for (i = 0; x[i][0]; i++) {
		for (j = 0; x[i][j]; j++)
			putchar("X.#"[x[i][j]]);
		putchar('\n');
	}
}
