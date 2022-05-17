comp(a, b)
	int *a, *b;
{
	return *b - *a;
}

main()
{
	auto abc[3], k;
	register i;

	scanf("%d%d%d%d", abc+0, abc+1, abc+2, &k);
	for (i = 0; i < k; i++) {
		qsort(abc, 3, sizeof(abc[0]), comp);
		abc[0] *= 2;
	}
	printf("%d\n", abc[0] + abc[1] + abc[2]);
}
