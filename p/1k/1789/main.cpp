#include <bits/stdc++.h>
using namespace std;
#define maxn 104
#define mapstart 2
#define mapend 101
#define DEBUG
/*
row and col 0,1  102,103 are outside of the map
map range from 2(included) to 101(included)
*/

int mapa[maxn][maxn];

// x,y
pair<int, int> t[maxn];  // torch
pair<int, int> g[maxn];  // glow stone

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

void prtmap() {
  puts("------------");
  for (int cx = mapstart; cx <= mapend && cx < 10 + 2; cx++) {
    for (int cy = mapstart; cy <= mapend && cy < 10 + 2; cy++) {
      printf("%d", mapa[cx][cy]);
    }
    putchar('\n');
  }
  puts("------------");
}

main() {
#ifdef DEBUG
  // freopen("debug.txt", "w", stdout);
#endif

  int n, m, k;
  /* input */
  scanf("%d %d %d", &n, &m, &k);
  for (int i = 0; i < m; i++) {
    scanf("%d %d", &t[i].first, &t[i].second);
  }
  if (k) {
    for (int i = 0; i < k; i++) {
      scanf("%d %d", &g[i].first, &g[i].second);
    }
  }

  for (int cx = mapstart; cx <= mapend && cx < n; cx++) {
    for (int cy = mapstart; cy <= mapend && cy < n; cy++) {
      // we 'bitwise or' them
#ifdef DEBUG
      puts("init");
      prtmap();
#endif
      // torch
      for (int i = 0; i < m; i++) {
        t[i].first--;
        t[i].second--;

        // cordinate shift
        int nx = t[i].first + cx;
        int ny = t[i].second + cy;
        //(nx,ny): torch point

        // fill them
        for (int dx = -2; dx <= 2; dx++) {
          for (int dy = -2; dy <= 2; dy++) {
            mapa[nx + dx][ny + dy] |= tl[dx + 2][dy + 2];
          }
        }
      }

#ifdef DEBUG
      puts("after filling torch");
      prtmap();
#endif
      // glow stone
      for (int i = 0; i < k; i++) {
        t[i].first--;
        t[i].second--;

        // cordinate shift
        int nx = t[i].first + cx;
        int ny = t[i].second + cy;
        //(nx,ny): torch point

        // fill them
        for (int dx = -2; dx <= 2; dx++) {
          for (int dy = -2; dy <= 2; dy++) {
            mapa[nx + dx][ny + dy] |= tl[dx + 2][dy + 2];
          }
        }
      }
#ifdef DEBUG
      puts("after filling glowstone");
      prtmap();
#endif
    }
  }
  // count ans;
  int ans = 0;
  for (int cx = mapstart; cx <= mapend && cx < n + 2; cx++) {
    for (int cy = mapstart; cy <= mapend && cy < n + 2; cy++) {
      if (mapa[cx][cy] == 0) ans++;
    }
  }
  printf("%d\n", ans);
  return 0;
}