main()
{
	auto n, a, b, k, p;
	auto t[100];
	register i;

	scanf("%d%d%d%d", &n, &a, &b, &k);
	for (i = 0; i < n; i++)
		t[i] = 0;
	t[a-1] = t[b-1] = 1;
	for (i = 0; i < k; i++) {
		scanf("%d", &p);
		if (t[p-1]++)
			return puts("NO"), 0;
	}
	puts("YES");
}
