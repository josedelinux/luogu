/*
4 possibilities:

vv(ok)
kk(ok)
vk(ok)
kv(unchangeable)

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  int cnt = 0;
  int n;
  string s;
  cin >> n;
  cin >> s;
  for (int i = 0; i < n - 1; i++) {
    int cur = s[i];
    int next = s[i + 1];

    if (cur == 'K' && next == 'V') {
      // ignore
    } else if (isalpha(cur) && isalpha(next)) {
      cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}