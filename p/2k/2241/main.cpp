/*
没思路,学习一下
https://www.luogu.com.cn/blog/_post/111055
No tengo ni idea
*/
#include <bits/stdc++.h>
#define MAX_N 5000

using namespace std;

unsigned char map[MAX_N + 1][MAX_N + 1];

int main() {
  int n, m;
  long long sqr = 0, rec = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++)      //循环，从n=0到n=(n-1)
    for (int j = 0; j < m; j++) {  //循环，从m=0到m=(m-1)
      if (i == j)
        sqr += (n - i) * (m - j);  //如果i==j，说明是正方形
      else
        rec += (n - i) * (m - j);  //如果不等说明是矩形
    }
  cout << sqr << " " << rec << endl;  //输出

  return 0;
}