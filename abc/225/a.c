comper(a, b)
	const void *a, *b;
{
	return *(int *)a - *(int *)b;
}

main()
{
	int i, s[3];

	for (i = 0; i < 3; i++)
		s[i] = getchar();
	qsort(s, sizeof(s)/sizeof(s[0]), sizeof(s[0]), comper);

	if (s[0] == s[1] && s[1] == s[2])
		puts("1");
	else if (s[0] == s[1] && s[1] != s[2] || s[0] != s[1] && s[1] == s[2])
		puts("3");
	else
		puts("6");
}
