#include <bits/stdc++.h>
#define maxn 10000
using namespace std;

int arr[maxn][maxn];

int pos[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int main() {
  int n;
  scanf("%d", &n);
  int kmax = n * n;
  int cnt = 1;

  /* output */
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%3d", cnt++);
    }
    putchar('\n');
  }
  return 0;
}