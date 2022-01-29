#include <bits/stdc++.h>
#define MAX_N 100
#define MAX_M 20
#define INFTY 1000000

using namespace std;

int arr[MAX_N];

int main() {
  int n, m;
  cin >> n >> m;

  double maxAv = -INFTY;

  for (int i = 0; i < n; i++) {
    int maxn = -INFTY;
    int minn = INFTY;
    int sum = 0;
    for (int j = 0; j < m; j++) {
      int cur = 0;
      cin >> cur;
      maxn = max(maxn, cur);
      minn = min(minn, cur);
      sum += cur;
    }
    sum = sum - maxn - minn;
    maxAv = max(maxAv, (double)sum / (m - 2));
  }

  printf("%.2lf\n", maxAv);
  return 0;
}