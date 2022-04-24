main()
{
	int i, up, low, max, chars[256] = { 0 };
	char s[101];

	gets(s);
	up = low = max = 0;
	for (i = 0; s[i]; i++) {
		up |= isupper(s[i]);
		low |= islower(s[i]);
		if (max < ++chars[s[i]])
			max = chars[s[i]];
	}
	if (up && low && max == 1)
		puts("Yes");
	else
		puts("No");
}
