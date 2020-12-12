#include <stdio.h>

#define min(a, b) ((a) > (b) ? (b) : (a))
#define max(a, b) ((a) < (b) ? (b) : (a))

int main(void)
{
  int a, b, c, k;
  int n = 0;

  scanf("%d%d%d%d", &a, &b, &c, &k);

  n += min(a, k);
  if ((k -= a) <= 0) goto v;

  if ((k -= b) <= 0) goto v;

  n -= min(c, k);

v:
  printf("%d\n", n);
  return 0;
}
