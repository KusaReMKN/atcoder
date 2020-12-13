#include <stdio.h>

int main(void)
{
  int k, n;
  int d1, d2;

  k = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d%d", &d1, &d2);
    if (d1 == d2) {
      k++;
    }
    else {
      k = 0;
    }
    if (k == 3) {
      puts("Yes");
      return 0;
    }
  }

  puts("No");

  return 0;
}
