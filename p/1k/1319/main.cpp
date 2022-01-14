#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int c;
  int content = 0;
  int charcnt = 0;  // for newline
  int cnt = 0;

  cin >> n;
  while (cnt < n * n) {
    cin >> c;
    content++;
    for (int i = c; i >= 1; i--) {
      if (charcnt == n) {  // new line
        cout << endl;
        charcnt = 0;
      }
      if (content % 2 == 1)
        cout << 0;
      else
        cout << 1;
      charcnt++;
      cnt++;
    }
  }
  cout << endl;
  return 0;
}