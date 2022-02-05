#include <stdio.h>
int main() {
  char buf[100];
  int a, b;
  scanf("%d%d", &a, &b);
  sprintf(buf, "%d", a + b);
  puts(buf);
  return 0;
}