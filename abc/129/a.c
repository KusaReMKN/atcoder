comper(a, b)
	void *a, *b;
{
	return *(int *)a - *(int *)b;
}

main()
{
	int i, v[3];

	for (i = 0; i < 3; i++)
		scanf("%d", v + i);
	qsort(v, 3, sizeof(v[0]), comper);
	printf("%d\n", v[0] + v[1]);

	return 0;
}
