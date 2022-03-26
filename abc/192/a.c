#include <stdio.h>
 
int main(void)
{
  int n;
  scanf("%d", &n);
  n %= 100;
  printf("%d\n", 100-n);
  return 0;
}
