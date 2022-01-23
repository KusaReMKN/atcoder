main()
{
	char s1[5], s2[3];

	scanf("%s%s", s1, s2);
	strcat(s1, s2);
	if (strcmp(s1, ".##.") && strcmp(s1, "#..#"))
		puts("Yes");
	else
		puts("No");
}
