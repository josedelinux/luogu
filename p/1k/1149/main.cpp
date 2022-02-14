/*
condition:
    cost[a]+cost[b]+cost[c]=n
    a+b=c
*/
#include <algorithm>
#include <iostream>
#define maxn 768
#define DEBUGn

using namespace std;

int cost[maxn] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

// construct cost after 9
inline void genCost(void) {
  for (int i = 10; i < maxn; i++) cost[i] = cost[i % 10] + cost[i / 10];
}

int main(int argc, char* argv[]) {
  genCost();
  int ans = 0;
  int n;
  cin >> n;
  n -= 4;  // delete '+'and'='
  for (int a = 0; a < maxn; a++) {
    for (int b = 0; b < maxn; b++) {
      for (int c = 0; c < maxn; c++) {
        if (a + b == c) {
#ifdef DEBUG
          cout << "a+b=c:" << a << "+" << b << "=" << c << endl;
#endif
          if (cost[a] + cost[b] + cost[c] == n) {
#ifdef DEBUG
            cout << "cost:" << a << "+" << b << "=" << c << endl;
#endif
            ans++;
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}