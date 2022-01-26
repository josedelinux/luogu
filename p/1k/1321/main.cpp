/*
想复杂了...
https://www.luogu.com.cn/blog/_post/101262
*/
#include <bits/stdc++.h>
#define DEBUGn

using namespace std;

int main() {
  int bcnt = 0;
  int gcnt = 0;
  string s;
  getline(cin, s);
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'b' || s[i + 1] == 'o' || s[i + 2] == 'y') bcnt++;
    if (s[i] == 'g' || s[i + 1] == 'i' || s[i + 2] == 'r' || s[i + 3] == 'l')
      gcnt++;
  }
  cout << bcnt << endl;
  cout << gcnt << endl;

#ifdef DEBUG
  cout << "final: " << s << endl;
#endif

  return 0;
}