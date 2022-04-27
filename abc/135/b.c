comp(a, b)
	int *a, *b;
{
	return *a - *b;
}

main()
{
	int i, j, n, p[50], q[50], tmp;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", p + i);
	memcpy(q, p, sizeof(p));
	qsort(q, n, sizeof(q[0]), comp);
	if (memcmp(q, p, sizeof(p)) == 0)
		goto YES;
	for (i = 0; i < n; i++)
		if (p[i] != q[i])
			break;
	for (j = i+1; j < n; j++)
		if (p[j] != q[j])
			break;
	tmp = q[i];
	q[i] = q[j];
	q[j] = tmp;
	if (memcmp(q, p, sizeof(p)) == 0)
YES:		puts("YES");
	else
		puts("NO");
}
