/*
very intuitive
copy from
https://www.luogu.com.cn/blog/_post/8487
*/
#include <bits/stdc++.h>
using namespace std;
int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int main() {
  int A, B, C, h = 0;
  cin >> A >> B >> C;
  int t = A * B * C;
  A = t / A;
  B = t / B;
  C = t / C;
  do {
    if ((100 * a[1] + 10 * a[2] + a[3]) * A ==
            (100 * a[4] + 10 * a[5] + a[6]) * B &&
        (100 * a[1] + 10 * a[2] + a[3]) * A ==
            (100 * a[7] + 10 * a[8] + a[9]) * C)  //如果符合比例；
    {
      cout << a[1] << a[2] << a[3] << " " << a[4] << a[5] << a[6] << " " << a[7]
           << a[8] << a[9] << endl;  //输出
      h++;
    }
  } while (next_permutation(a + 1, a + 10));  // STL中的下一个排列函数；
  if (h == 0) {
    cout << "No!!!";
  }
  return 0;
}