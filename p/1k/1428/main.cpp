#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 0;
  int a[105] = {0};  // cute value
  int ans[105] = {0};

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  /**/
  for (int i = 0; i < n; i++) {
    int k = 0;

    for (int j = 0; j < i; j++) {
      if (a[j] < a[i]) k++;
    }
    ans[i] = k;
  }
  /**/

  for (int i = 0; i < n; i++) {
    printf("%d ", ans[i]);
  }
  putchar('\n');
  return 0;
}
