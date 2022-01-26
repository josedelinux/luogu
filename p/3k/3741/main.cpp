/*
4 possibilities:

vv(ok)
kk(ok)
vk(ok,target)
kv(unchangeable)

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
  int cnt = 0;
  int flag = 0;  // "yes we can change" flag
  int n;
  string s;
  cin >> n;
  cin >> s;
  for (int i = 0; i < n - 1; i++) {
    int cur = s[i];
    int next = s[i + 1];

    if (cur == 'K' && next == 'V') {
      // ignore
      continue;
    } else if (cur == 'V' && next == 'K') {
      cnt++;
      // disable them
      s[i] = tolower(cur);
      s[i + 1] = tolower(next);

    } else if (!flag && isupper(cur) && isupper(next)) {
      if (!islower(s[i - 1])) flag = 1;
    }
  }

  cout << cnt + flag << endl;
  return 0;
}