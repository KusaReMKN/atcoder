#include <stdio.h>
 
int main(void)
{
  int m, h;
  scanf("%d%d", &m, &h);
  printf("%s\n", h % m ? "No" : "Yes");
  return 0;
}
