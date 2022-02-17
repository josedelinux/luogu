/*
没思路
https://en.wikipedia.org/wiki/Dutch_national_flag_problem
https://www.luogu.com.cn/blog/_post/228737

从每一个点开始,横向和竖向搜索k位,如果其中没有任何
障碍的话就让答案加一。

当k=1时,横向和竖向是一样的,相当于计算了两次。所以
需要特判并输出答案/2。


*/

#include <algorithm>
#include <iostream>

using namespace std;

char field[105][105];

int main() {
  int ans = 0;
  int r, c, k;
  cin >> r >> c >> k;
  for (int row = 1; row <= r; row++) {
    for (int col = 1; col <= c; col++) {
      cin >> field[row][col];
    }
  }

  //横向搜索horizontal
  for (int row = 1; row <= r; row++) {
    for (int col = 1; col <= c; col++) {
      bool flag = true;
      for (int i = 0; i < k; i++) {
        if (field[row][col + i] != '.') {
          flag = false;
          break;
        }
      }
      if (flag) ans++;
    }
  }

  // vertical
  for (int row = 1; row <= r; row++) {
    for (int col = 1; col <= c; col++) {
      bool flag = true;
      for (int i = 0; i < k; i++) {
        if (field[row + i][col] != '.') {
          flag = false;
          break;
        }
      }
      if (flag) ans++;
    }
  }

  if (k == 1)
    cout << ans / 2 << endl;
  else
    cout << ans << endl;

  return 0;
}