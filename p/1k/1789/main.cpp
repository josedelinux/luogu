#include <bits/stdc++.h>
using namespace std;
#define maxn 105

bool map[maxn][maxn];

pair<int, int> t[];  // torch
pair<int, int> g[];  // glow stone

main() {
  int n, m, k;
  /* input */
  scanf("%d %d %d", &n, &m, &k);
  for (int i = 0; i < m; i++) {
    scanf("%d %d", t->first, t->second);
  }
  if (k) {
    for (int i = 0; i < k; i++) {
      scanf("%d %d", g->first, g->second);
    }
  }
  return 0;
}