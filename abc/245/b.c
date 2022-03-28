main()
{
	int n, i, a, tab[2001] = { 0 };

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a), tab[a]++;
	for (i = 0; i < n; i++)
		if (tab[i] == 0)
			break;
	printf("%d\n", i);
}
