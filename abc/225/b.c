com(a1, b1, a2, b2)
{
	if (a1 == a2)
		return a1;
	if (a1 == b2)
		return a1;
	if (b1 == a2)
		return b1;
	if (b1 == b2)
		return b1;
	return -1;
}

main()
{
	int n, a1, b1, a2, b2, c, tmp, i;

	scanf("%d", &n);
	scanf("%d%d", &a1, &b1);
	scanf("%d%d", &a2, &b2);
	c = com(a1, b1, a2, b2);
	for (i = 2; i < n-1 && c != -1; i++) {
		a2 = a1; b2 = b1;
		scanf("%d%d", &a1, &b1);
		tmp = com(a1, b1, a2, b2);
		if (c != tmp) {
			c = -1;
			break;
		}
	}
	if (c == -1)
		puts("No");
	else
		puts("Yes");
}
