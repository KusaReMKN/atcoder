unsigned long long
gcd (a, b)
	unsigned long long a, b;
{
	return !b ? a : gcd(b, a % b);
}

main()
{
	unsigned long long a, b, d;

	scanf("%llu%llu", &a, &b);
	d = gcd(a, b);
	printf("%llu\n", a / d * b);
}
