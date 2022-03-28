main()
{
	int i;
	char s[13];

	gets(s);
	for (i = 0; s[i]; i++)
		s[i] = i ? tolower(s[i]) : toupper(s[i]);
	puts(s);
}
