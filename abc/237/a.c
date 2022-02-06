main()
{
	signed long long int n;
	scanf("%lld", &n);

	if (-(1LL<<31) <= n && n < (1LL<<31))
		puts("Yes");
	else
		puts("No");
}
