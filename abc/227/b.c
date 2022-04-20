main()
{
#define f(a, b) (4 * (a) * (b) + 3 * (a) + 3 * (b))
	int n, s;
	int a, b, i, cant;

	scanf("%d", &n);
	cant = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &s);
		for (a = 1; a <= s; a++)
			for (b = 1; b <= s; b++)
				if (f(a, b) == s)
					goto can;
		cant++;
can:;	}
	printf("%d\n", cant++);
}
