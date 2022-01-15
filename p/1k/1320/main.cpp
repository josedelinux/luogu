#include <bits/stdc++.h>
#define DEBUGn

using namespace std;

int ans[40001];
int ai;  // answer index

int main() {
  int n;
  char c, last = '0';
#ifdef DEBUG
  freopen("input.txt", "r", stdin);
#endif

  while (cin >> c) {
    n++;
    if (c == last) {
      ans[ai]++;
    } else {
      ans[++ai]++;
      last = c;
    }
  }
  cout << sqrt(n);
  for (int i = 0; i <= ai; i++) {
    cout << " " << ans[i];
  }
  cout << endl;
  return 0;
}