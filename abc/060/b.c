main()
{
	auto a, b, c, r[100];
	register i;

	scanf("%d%d%d", &a, &b, &c);
	for (i = 0; i < b; i++)
		r[i] = 0;
	for (i = a; !r[i%b]++; i += a)
		if (i % b == c)
			return puts("YES"), 0;
	puts("NO");
}
