main()
{
	int n;
	int i, j, s, t;

	scanf("%d", &n);
	s = 0;
	for (i = 1; i <= n; i++) {
		t = i;
		for (j = 1; t /= 10; j++);
		if (j % 2 == 1)
			s++;
	}
	printf("%d\n", s);
}
