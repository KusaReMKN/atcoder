comp(a, b)
	const void *a, *b;
{
	return *(int *)b - *(int *)a;
}

main()
{
	int i, v[6];

	for (i = 0; i < 6; i++)
		scanf("%d", v + i);
	qsort(v, 6, sizeof(v[0]), comp);
	printf("%d\n", v[2]);
}
