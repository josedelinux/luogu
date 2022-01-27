#include <bits/stdc++.h>

using namespace std;
#define maxn 66

map<string, int> m;

void init() {
  m["one"] = 1;
  m["two"] = 2;
  m["three"] = 3;
  m["four"] = 4;
  m["five"] = 5;
  m["six"] = 6;
  m["seven"] = 7;
  m["eight"] = 8;
  m["nine"] = 9;
  m["ten"] = 10;
  m["eleven"] = 11;
  m["twelve"] = 12;
  m["thirteen"] = 13;
  m["fourteen"] = 14;
  m["fifteen"] = 15;
  m["sixteen"] = 16;
  m["seventeen"] = 17;
  m["eighteen"] = 18;
  m["nineteen"] = 19;
  m["twenty"] = 20;
  m["a"] = 1;
  m["both"] = 2;
  m["another"] = 1;
  m["first"] = 1;
  m["second"] = 2;
  m["third"] = 3;
}

int main() {
  init();

  string s;
  int arr[maxn] = {0};  // for step 3
  int cnt = 0;          // arr count

  for (int i = 0; i < 6; i++) {
    cin >> s;
    if (m[s]) {
      int t = m[s] * m[s] % 100;
      if (t == 0) continue;
      arr[cnt++] = t;
    }
  }
  sort(arr, arr + cnt);

  cout << arr[0];
  for (int i = 1; i < cnt; i++) {
    if (arr[i] < 10) cout << 0;
    cout << arr[i];
  }
  cout << endl;
  return 0;
}