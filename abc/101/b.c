s(n)
{
	int s;
	for (s = 0; n; s += n % 10, n /= 10);
	return s;
}

main()
{
	int n;

	scanf("%d", &n);
	puts(n % s(n) == 0 ? "Yes" : "No");
}
