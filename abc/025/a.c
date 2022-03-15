main()
{
	int n;
	char s[6];

	scanf("%s%d", s, &n);
	n--;
	printf("%c%c\n", s[n / 5], s[n % 5]);
}
