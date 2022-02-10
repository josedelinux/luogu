#include <stdbool.h>
#include <stdio.h>

int n;
int arr[10];
bool used[10];

void dfs(int k) {
  if (k == n) {  // deepest one
    for (int i = 0; i < n; i++) {
      printf("%5d", arr[i]);
    }
    putchar('\n');
    return;
  }

  for (int i = 0; i < n; i++) {
    if (!used[i]) {    // if not used
      arr[k] = i + 1;  // content
      used[i] = true;
      dfs(k + 1);
      used[i] = false;
    }
  }
}

int main(int argc, char **argv) {
  scanf("%d", &n);
  dfs(0);
  return 0;
}