/*
想不出来
https://www.luogu.com.cn/blog/_post/56758
O(n*n+nm)

开数组w[i],b[i],r[i]，分别表示把前i行涂成白、蓝、红需要涂的格子数

设第1行到第i行是白色

第i+1行到第j行是蓝色

则第j+1行到第n行是红色

此时代价为w[i]+b[j]-b[i]+r[n]-r[j]

枚举i,j，取最小值即可
*/

#include <algorithm>
#include <iostream>

#define MAX_N 50

using namespace std;

int ans = 0x7fffffff;
int N, M;
int w[MAX_N + 1], b[MAX_N + 1], r[MAX_N + 1];

string s;  // cols

inline int check(char c) {
  int tot = 0;
  for (int i = 0; i < M; ++i)
    if (s[i] != c) ++tot;
  return tot;
}

int main(int argc, char* argv[]) {
  cin >> N >> M;
  for (int row = 1; row <= N; row++) {
    cin >> s;
    w[row] = w[row - 1] + check('W');
    b[row] = b[row - 1] + check('B');
    r[row] = r[row - 1] + check('R');
  }

  for (int i = 1; i < N - 1; i++)
    for (int j = i + 1; j < N; j++)
      ans = min(ans, w[i] + b[j] - b[i] + r[N] - r[j]);

  cout << ans << endl;
  return 0;
}