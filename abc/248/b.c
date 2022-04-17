main()
{
	unsigned long long int a, b, k;
	unsigned long long int i;

	scanf("%llu%llu%llu", &a, &b, &k);
	for (i = 0; a < b; i++)
		a *= k;
	printf("%llu\n", i);
}
