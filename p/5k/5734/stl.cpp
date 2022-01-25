/*
ref:
https://www.luogu.com.cn/blog/Au-dream/solution-p5734
stl大法好
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string ori;

  int cmd;
  cin >> n;
  cin >> ori;
  for (int i = 0; i < n; i++) {
    cin >> cmd;
    if (cmd == 1) {
      string s1;
      cin >> s1;
      ori = ori + s1;
      cout << ori << endl;
    } else if (cmd == 2) {
      string cut;
      int a, b;
      cin >> a >> b;
      cut = ori.substr(a, b);
      ori = cut;
      cout << ori << endl;
    } else if (cmd == 3) {
      int a;
      string str;
      cin >> a >> str;
      ori.insert(a, str);
      cout << ori << endl;
    } else if (cmd == 4) {
      string str;
      cin >> str;
      /* static const size_type npos = -1;
      return npos if not found
      */
      if (ori.find(str) < ori.size())
        cout << ori.find(str) << endl;
      else
        cout << -1 << endl;
    }
  }
  return 0;
}