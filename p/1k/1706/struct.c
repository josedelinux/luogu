#include <stdbool.h>
#include <stdio.h>

int n;

struct item {
  int value;
  bool used;
} it[10];

void dfs(int k) {
  if (k == n) {  // deepest one
    for (int i = 0; i < n; i++) {
      printf("%5d", it[i].value);
    }
    putchar('\n');
    return;
  }

  for (int i = 0; i < n; i++) {
    if (!it[i].used) {      // if not used
      it[k].value = i + 1;  // content
      it[i].used = true;
      dfs(k + 1);
      it[i].used = false;
    }
  }
}

int main(int argc, char **argv) {
  scanf("%d", &n);
  dfs(0);
  return 0;
}