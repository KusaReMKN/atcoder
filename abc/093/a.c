comper(a, b)
	const void *a, *b;
{
	return *(const char *)a - *(const char *)b;
}

main()
{
	char s[4];

	gets(s);
	qsort(s, strlen(s), sizeof(s[0]), comper);
	puts(strcmp(s, "abc") ? "No" : "Yes");
}
