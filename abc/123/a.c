main()
{
	int i, v[5], k;

	for (i = 0; i < 5; i++)
		scanf("%d", v + i);
	scanf("%d", &k);

	for (i = 0; i < 5; i++)
		if (v[i] - v[0] > k) {
			puts(":(");
			return 0;
		}
	puts("Yay!");
}
