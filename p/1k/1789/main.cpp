#include <bits/stdc++.h>
using namespace std;
#define maxn 105

int map[maxn][maxn];

pair<int, int> t[];  // torch
pair<int, int> g[];  // glow stone

// torch light
int tl[5][5] = {{0, 0, 1, 0, 0},
                {0, 1, 1, 1, 0},
                {1, 1, 1, 1, 1},
                {0, 1, 1, 1, 0},
                {0, 0, 1, 0, 0}};

// glow stone light
int gl[5][5] = {{1, 1, 1, 1, 1},
                {1, 1, 1, 1, 1},
                {1, 1, 1, 1, 1},
                {1, 1, 1, 1, 1},
                {1, 1, 1, 1, 1}};

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

  // handle torch light
  // for (int dx = -2; dx <= 2; dx++) {
  //   for (int dy = -2; dy <= 2; dy++) {
  //     if (0 <= dy && dy < n && 0 <= dx && dx < n && 1) {

  //     }
  //   }
  // }

  return 0;
}