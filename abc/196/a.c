#include <stdio.h>

int main(void)
{
  int b, c;
  scanf("%*d%d%d%*d", &b, &c);
  printf("%d\n", b - c);
  return 0;
}
