#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(void)
{
  int n, t, a, h;
  int i, k = -1;
  double d, min = 999999.;
  
  scanf("%d%d%d", &n, &t, &a);
  for (i = 0; i < n; i++) {
    scanf("%d", &h);
    if ((d = fabs(a - (t - h * .006))) < min) {
      min = d;
      k = i;
    }
  }
  printf("%d\n", k + 1);
  
  return 0;
}
