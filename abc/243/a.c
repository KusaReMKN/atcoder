main()
{
	int v, a, b, c;

	scanf("%d%d%d%d", &v, &a, &b, &c);
	for (;;) {
		if ((v -= a) < 0)
			return puts("F"), 0;
		if ((v -= b) < 0)
			return puts("M"), 0;
		if ((v -= c) < 0)
			return puts("T"), 0;
	}
}
