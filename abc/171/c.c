#include <stdio.h>

int main(void) {
  unsigned long long int n;
  char name[1024] = {0};
  int offset = 1023;
  scanf("%llu", &n);

  n--;

  name[offset--] = "abcdefghijklmnopqrstuvwxyz"[n % 26];
  n /= 26;

  for (; n; n /= 26) {
    n--;
    name[offset--] = "abcdefghijklmnopqrstuvwxyz"[n % 26];
  }
  puts(name + offset + 1);
  return 0;
}
