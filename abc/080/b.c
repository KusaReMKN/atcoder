f(x)
{
	char s[9];
	register i, sum;

	sprintf(s, "%d", x);
	sum = 0;
	for (i = 0; s[i]; i++)
		sum += s[i] - '0';

	return sum;
}

main()
{
	auto n;

	scanf("%d", &n);
	puts(n % f(n) == 0 ? "Yes" : "No");
}
