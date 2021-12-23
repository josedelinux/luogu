#include <bits/stdc++.h>
#define maxn 10010

int rec = 1;
int Sal[maxn];

int main() {
  for (int i = 1; i < maxn;) {
    for (int j = 0; j < rec; j++) {
      Sal[i] = rec + Sal[i - 1];
      i++;
    }
    rec++;
  }
  int k;
  scanf("%d", &k);
  printf("%d\n", Sal[k]);

  return 0;
}