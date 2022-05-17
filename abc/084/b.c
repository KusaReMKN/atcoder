main()
{
	auto a, b;
	char s[16];
	register i, t, l;

	scanf("%d%d%s", &a, &b, s);
	t = l = 0;
	for (i = 0; s[i]; i++)
		switch (t) {
		case 0:
			if (!isdigit(s[i])) {
				if (a == l)
					t++, l = 0;
				else
					return puts("No"), 0;
			} else {
				l++;
			}
			break;
		case 1:
			if (!isdigit(s[i]))
				return puts("No"), 0;
			else
				l++;
			break;
		}
	if (b == l)
		puts("Yes");
	else
		puts("No");
}
