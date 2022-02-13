/*
https://www.luogu.com.cn/blog/_post/58422
原理一样


*/

#include <algorithm>
#include <iostream>

using namespace std;

char c[51][51];

int main() {
  int mi = 114514;
  int ans;
  int n, m;

  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++) cin >> c[i][j];

  //由于白色下面还有蓝色和红色，所以i（白与蓝的边界）枚举到（n-2）
  for (int i = 1; i <= n - 2; i++)
    // j（蓝与红的边界）至少要比i大1，同理枚举到（n-1），这样可以减少枚举次数
    for (int j = i + 1; j <= n - 1; j++) {
      ans = 0;
      int k, g;
      for (k = 1; k <= i; k++)
        for (g = 1; g <= m; g++)
          if (c[k][g] != 'W') ans++;
      for (k = i + 1; k <= j; k++)
        for (g = 1; g <= m; g++)
          if (c[k][g] != 'B') ans++;
      for (k = j + 1; k <= n; k++)
        for (g = 1; g <= m; g++)
          if (c[k][g] != 'R') ans++;
      //强迫症（本蒟蒻）看到这些语句表示很开心
      mi = min(ans, mi);  //更新答案
    }
  cout << mi << endl;

  return 0;
}
