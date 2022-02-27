main()
{
	int a;
	char s[11];

	scanf("%d%s", &a, s);
	printf("%s\n", a >= 3200 ? s : "red");
}
