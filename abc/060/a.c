main()
{
	char a[11], b[11], c[11];

	scanf("%s%s%s", a, b, c);
	if (a[strlen(a)-1] == b[0] && b[strlen(b)-1] == c[0])
		puts("YES");
	else
		puts("NO");
}
