main()
{
	int ff[101][101] = {{ 0 }};
	int q, n, i, f, a, b, j, k;

	scanf("%d%d", &n, &q);
	for (i = 0; i < q; i++) {
		scanf("%d", &f);
		switch (f) {
		case 1:
			scanf("%d%d", &a, &b);
			ff[a][b] = 1;
			break;
		case 2:
			scanf("%d", &a);
			for (j = 1; j <= n; j++)
				if (ff[j][a])
					ff[a][j] = 1;
			break;
		case 3:
			scanf("%d", &a);
			for (j = 1; j <= n; j++)
				if (ff[a][j] == 1)
					for (k = 1; k <= n; k++)
						if (ff[j][k] && !ff[a][k])
							ff[a][k] = 2;
			for (j = 1; j <= n; j++)
				if (ff[a][j])
					ff[a][j] = 1;
			break;
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			if (i == j)
				putchar('N');
			else
				putchar(ff[i][j] ? 'Y' : 'N');
		putchar('\n');
	}
}
