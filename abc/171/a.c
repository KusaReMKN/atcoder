#include <ctype.h>
#include <stdio.h>

int main(void) {
  int c;
  scanf("%c", &c);
  if (isupper(c)) {
    puts("A");
  } else {
    puts("a");
  }
  return 0;
}
