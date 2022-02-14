/*
condition:
    cost[a]+cost[b]+cost[c]=n
    a+b=c
他奶奶的，打表是吧
*/

#include <iostream>
#define maxn 768
#define DEBUGn

using namespace std;

int cost[maxn] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

// construct cost after 9
inline void genCost(int n) {
  for (int i = 10; i < n; i++) cost[i] = cost[i % 10] + cost[i / 10];
}

int main(int argc, char* argv[]) {
  genCost(maxn);

  for (int n = 0; n <= 24; n++) {
    int ans = 0;
    for (int a = 0; a < maxn; a++) {
      for (int b = 0; b < maxn; b++) {
        for (int c = 0; c < maxn; c++) {
          if (a + b == c) {
            if (cost[a] + cost[b] + cost[c] == n - 4) {
              ans++;
            }
          }
        }
      }
    }
    /*开炮*/
    cout << ans << ",";
  }
  return 0;
}