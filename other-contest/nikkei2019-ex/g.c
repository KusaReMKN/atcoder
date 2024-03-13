#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[100001];
	int m['z'-'a'+1];
	long len;

	scanf("%s", s);
	memset(m, 0, sizeof(m));
	for (int i = 0; s[i] != '\0'; i++)
		m[s[i]-'a']++;
	len = 0;
	for (int i = 'a'; i <= 'z'; i++) {
		len += m[i-'a'] & ~1;
		m[i-'a'] &= 1;
	}
	for (int i = 'a'; i <= 'z'; i++)
		if (m[i-'a'] > 0) {
			len++;
			m[i-'a']--;
			break;
		}
	len *= len;
	for (int i = 'a'; i <= 'z'; i++)
		len += m[i-'a'];
	printf("%ld\n", len);

	return 0;
}
