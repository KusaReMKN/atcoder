main()
{
	auto s;
	auto a[1000001];
	register i;

	for (i = 0; i < 1000001; i++)
		a[i] = 0;
	scanf("%d", &s);
	for (i = 1; !a[s]; i++) {
		a[s]++;
		if (s & 1)
			s = s * 3 + 1;
		else
			s >>= 1;
	}
	printf("%d\n", i);
}
