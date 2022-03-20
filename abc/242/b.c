comper(a, b)
	const void *a, *b;
{
	return *(const char *)a - *(const char *)b;
}

main()
{
	char s[200001];

	scanf("%s", s);
	qsort(s, strlen(s), 1, comper);
	puts(s);
}
