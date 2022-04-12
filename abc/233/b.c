main()
{
	int l, r;
	char s[100001];
	int i, t;

	scanf("%d%d%s", &l, &r, s);
	l--, r--;
	for (i = 0; i <= (r - l) / 2; i++) {
		t = s[l+i];
		s[l+i] = s[r-i];
		s[r-i] = t;
	}
	puts(s);
}
