#include <stdio.h>
#define maxn 1000010

int ans[maxn] = {0};
int main() {
  int a, b;

  scanf("%d%d", &a, &b);
  for (int i = a; i < b; i++) {
    printf("%d\n");
  }
  return 0;
}