/*
4 possibilities:

vv(ok)
kk(ok)
vk(ok,target)
kv(unchangeable)

*/
#include <bits/stdc++.h>
#define DEBUGn

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

    if (cur == 'V' && next == 'K') {
      cnt++;
      // disable them
      s[i] = tolower(cur);
      s[i + 1] = tolower(next);
    }
  }

  for (int i = 0; i < n - 1; i++) {
    int cur = s[i];
    int next = s[i + 1];

    if (!islower(s[i]) && cur == next) flag = 1;
  }
#ifdef DEBUG
  cout << "flag: " << flag << endl;
#endif
  cout << cnt + flag << endl;

  return 0;
}