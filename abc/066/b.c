main()
{
	char s[201], hs[101];
	register i;

	gets(s);
	s[strlen(s)-1] = 0;
	if (strlen(s) & 1)
		s[strlen(s)-1] = 0;
	for (i = 0; i < strlen(s)/2; i++)
		hs[i] = s[i];
	hs[i] = 0;
	while (strcmp(hs, s + strlen(s)/2))
		hs[strlen(hs)-1] = s[strlen(s)-2] = 0;
	printf("%d\n", strlen(s));
}
