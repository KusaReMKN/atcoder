main()
{
	int n, k, a, tmp;

	scanf("%d%d%d", &n, &k, &a);
	tmp = (a + k - 1) % n;
	printf("%d\n", tmp ? tmp : n);
}
