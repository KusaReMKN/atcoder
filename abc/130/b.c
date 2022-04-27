main()
{
	int n, x, l;
	int i, p, s;

	scanf("%d%d", &n, &x);
	p = s = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &l);
		if ((p += l) <= x)
			s++;
		else
			break;
	}
	printf("%d\n", ++s);
}
