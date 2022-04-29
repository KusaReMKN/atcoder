struct restaurant {
	int i;
	int p;
	char n[101];
};

pcmp(a, b)
	struct restaurant *a, *b;
{
	return b->p - a->p;
}

ncmp(a, b)
	struct restaurant *a, *b;
{
	return strcmp(a->n, b->n);
}

main()
{
	int n, i;
	struct restaurant r[100];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s%d", r[i].n, &r[i].p), r[i].i = i+1;
	/*
	 * XXX: Unsubstantiated confidence that qsort(3) is stable.
	 */
	qsort(r, n, sizeof(r[0]), pcmp);
	qsort(r, n, sizeof(r[0]), ncmp);

	for (i = 0; i < n; i++)
		printf("%d\n", r[i].i);
}
