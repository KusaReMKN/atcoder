main()
{
	int n;
	char s[4];

	scanf("%d", &n);
	for (;; n++) {
		sprintf(s, "%d", n);
		if (s[0] == s[1] && s[1] == s[2])
			return puts(s), 0;
	}
}
