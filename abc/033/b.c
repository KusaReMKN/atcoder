main()
{
	auto n, p;
	char s[21], name[21];
	register i, max, sum;

	scanf("%d", &n);
	sum = max = 0;
	for (i = 0; i < n; i++) {
		scanf("%s%d", s, &p);
		if (max < p) {
			strcpy(name, s);
			max = p;
		}
		sum += p;
	}
	if (sum >= max*2)
		strcpy(name, "atcoder");
	puts(name);
}
