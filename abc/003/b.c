main()
{
	int i;
	char s[11], t[11];

	gets(s);
	gets(t);

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] != t[i])
#define isat(s, t) \
	(s=='@' && \
	(t=='a'||t=='t'||t=='c'||t=='o'||t=='d'||t=='e'||t=='r'||t=='@'))
			if (!isat(s[i], t[i]) && !isat(t[i], s[i]))
				return puts("You will lose"), 0;
	puts("You can win");
}
