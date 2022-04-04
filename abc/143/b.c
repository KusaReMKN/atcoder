main()
{
	int n, i, j, d[50];
	int sum;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", d + i);
	sum = 0;
	for (i = 0; i < n; i++)
		for (j = i+1; j < n; j++)
			sum += d[i] * d[j];
	printf("%d\n", sum);
}
