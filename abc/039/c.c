#include <stdio.h>
#include <string.h>

int
main(void)
{
	char *keytab[] = {
		"WBWBWWBWBWBW",
		"WBWWBWBWBWWB",
		"WWBWBWBWWBWB",
		"WBWBWBWWBWBW",
		"WBWBWWBWBWWB",
		"WBWWBWBWWBWB",
		"WWBWBWWBWBWB",
	};
	char *notetab[] = {
		"Do", "Re", "Mi", "Fa", "So", "La", "Si",
	};
	char s[21];

	gets(s);
	for (int i = 0; i < 7; i++)
		if (strstr(s, keytab[i]) == s)
			puts(notetab[i]);

	return 0;
}
