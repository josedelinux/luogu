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
    } else if (!flag && isalpha(cur) && isalpha(next)) {
      /* 2 exception: VKVVK VKKVK
       */
      if (s[i - 1] == 'K' && s[i - 2] == 'V' && s[i + 1] == 'V' &&
          s[i + 2] == 'K') {
        // hace nada
      } else if (s[i - 1] == 'V' && cur == 'K') {
        // hace nada
      } else {
        flag = 1;
      }
    }
  }

  cout << cnt + flag << endl;
  return 0;
}