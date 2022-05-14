main()
{
	char s[101];
	register head, tail, length;

	gets(s);
	length = strlen(s);
	head = s[0];
	tail = s[length-1];
	printf("%c%d%c\n", head, length-2, tail);
}
