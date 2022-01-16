main()
{
	int i, n;
	int h, max = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &h);
		if (max < h)
			max = h;
		else
			break;
	}
	printf("%d\n", max);
}
