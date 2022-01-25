#include <bits/stdc++.h>

using namespace std;
char alpha[10][5] = {
    "",      // 1
    "abc",   // 2
    "def",   // 3
    "ghi",   // 4
    "jkl",   // 5
    "mno",   // 6
    "pqrs",  // 7
    "tuv",   // 8
    "wxyz",  // 9
};

int main() {
  int cnt = 0;
  string str;
  getline(cin, str);

  int n = str.size();
  for (int i = 0; i < n; i++) {
    if (isalpha(str[i])) {
      // find the position in alpha 2d array
      for (int row = 1; row < 10; row++) {
        for (int col = 0; col < 4; col++) {
          if (isalpha(alpha[row][col]) && str[i] == alpha[row][col]) {
            cnt = cnt + col + 1;
          }
        }
      }

    } else {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}