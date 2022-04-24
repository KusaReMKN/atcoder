main()
{
	int a, b, c, d, e, f, i, x;
	int aoki, taka;

	scanf("%d%d%d", &a, &b, &c);
	scanf("%d%d%d", &d, &e, &f);
	scanf("%d", &x);
	aoki = taka = 0;
	for (i = 0; i < x; i++) {
		if (i % (a+c) < a)
			taka += b;
		if (i % (d+f) < d)
			aoki += e;
	}
	if (taka == aoki)
		puts("Draw");
	else if (taka > aoki)
		puts("Takahashi");
	else
		puts("Aoki");
}
