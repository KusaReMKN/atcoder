asc(a, b)
	char *a, *b;
{
	return *a - *b;
}

desc(a, b)
	char *a, *b;
{
	return *b - *a;
}

main()
{
	char s[101], t[101];

	gets(s);
	gets(t);
	qsort(s, strlen(s), 1, asc);
	qsort(t, strlen(t), 1, desc);
	if (strcmp(s, t) < 0)
		puts("Yes");
	else
		puts("No");
}
