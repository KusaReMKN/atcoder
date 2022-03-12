main()
{
	int a, i, n, r, s;;

	scanf("%d", &n);
	r = 1;
	s = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a == r)
			r++;
		else
			s++;
	}
	printf("%d\n", s == n ? -1 : s);
}
