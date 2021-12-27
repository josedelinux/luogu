#include <bits/stdc++.h>

using namespace std;

int main() {
  int a[105] = {0};
  int k = 0;
  do {
    scanf("%d", &a[k]);
    if (a[k] == '0') break;
    k++;
  } while (1);

  for (int i = k; i > 0; i--) {
    printf("%d ", n);
  }
  putchar('\n');
  return 0;
}
