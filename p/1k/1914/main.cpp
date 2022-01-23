#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;

  cin >> n;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    /*
    id:
     a:0
     z:25
     */
    int id = s[i] - 'a';
    id = id + n;
    id = id % 26;
    char ans = id + 'a';
    cout << ans;
  }

  cout << endl;
  return 0;
}