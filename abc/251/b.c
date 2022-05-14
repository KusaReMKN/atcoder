main()
{
	auto n, w, a;
	auto A[1000000];
	auto N[1000001];
	register i, j, k;

	scanf("%d%d", &n, &w);
	for (i = 0; i <= w; i++)
		N[i] = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a <= w)
			N[a] = 1;
		A[i] = a;
	}
	for (i = 0; i < n; i++)
		for (j = i+1; j < n; j++) {
			a = A[i] + A[j];
			if (a <= w)
				N[a] = 1;
		}
	for (i = 0; i < n; i++)
		for (j = i+1; j < n; j++)
			for (k = j+1; k < n; k++) {
				a = A[i] + A[j] + A[k];
				if (a <= w)
					N[a] = 1;
			}
	a = 0;
	for (i = 0; i <= w; i++)
		if (N[i])
			a++;
	printf("%d\n", a);
}
