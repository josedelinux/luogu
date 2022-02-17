/*
condition:
    cost[a]+cost[b]+cost[c]=n
    a+b=c
todo 优化算法
*/

#include <iostream>
#define maxn 768
#define DEBUGn

using namespace std;

int cost[maxn] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

// get cost
inline void genCost(int n) {
  for (int i = 10; i < n; i++) {
    int k = i;
    while (k >= 1) {
      cost[i] = cost[i] + cost[k % 10];
      k /= 10;
    }
    // cout << i << ": " << cost[i] << endl;
  }
}

int main(int argc, char* argv[]) {
  genCost(maxn);
  int ans = 0;
  int n;
  cin >> n;
  for (int a = 0; a < maxn; a++) {
    for (int b = 0; b < maxn; b++) {
      for (int c = 0; c < maxn; c++) {
        if (cost[a] + cost[b] + cost[c] + 4 == n && a + b == c && 1) {
#ifdef DEBUG
          cout << a << "+" << b << "=" << c << endl;
#endif
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}