static char *
shift(s, n)
	char *s;
{
	static char t[1001];
	int i;

	for (i = 0; i < strlen(s); i++)
		t[i] = s[(i+n) % strlen(s)];
	t[i] = 0;

	return t;
}

main()
{
	int i;
	char *t;
	char s[1001];
	char min[1001], max[1001];

	gets(s);
	strcpy(min, s);
	strcpy(max, s);
	for (i = 0; i < strlen(s); i++) {
		t = shift(s, i);
		if (strcmp(t, max) > 0)
			strcpy(max, t);
		if (strcmp(t, min) < 0)
			strcpy(min, t);
	}
	puts(min);
	puts(max);
}
