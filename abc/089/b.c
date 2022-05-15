main()
{
	auto n, s;
	register i;

	scanf("%d", &n);
	s = 0;
	for (i = 0; i < n; i++) {
		scanf("%c", &s);
		if (s == 'Y')
			return puts("Four"), 0;
	}
	puts("Three");
}
