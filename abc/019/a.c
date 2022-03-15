comp(a, b)
	const void *a, *b;
{
	return *(int *)a - *(int *)b;
}

main()
{
	int i, a[3];

	for (i = 0; i < 3; i++)
		scanf("%d", a + i);
	qsort(a, 3, sizeof(a[0]), comp);
	printf("%d\n", a[1]);
}
