main()
{
	char a[51], b[51];
	gets(a);
	gets(b);
	puts(strlen(a) > strlen(b) ? a : b);
}
