main()
{
	int i;
	char s[4];
	char *sv[] = { "SAT", "FRI", "THU", "WED", "TUE", "MON", "SUN" };

	scanf("%s", s);
	for (i = 0; i < 7; i++)
		if (strcmp(s, sv[i]) == 0)
			printf("%d\n", i + 1);
}
