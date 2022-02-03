/*
https://www.luogu.com.cn/blog/_post/23844
研究 [1 2 3 4]
[1] [2] [3] [4]
[1 2] [1 3] [1 4]  [2 3] [2 4]  [3 4]
[1 2 3] [1 2 4]  [1 3 4]  [2 3 4]
[1 2 3 4]
sum = (1+ 2+ 3+ 4)*2^(4-1)
发现规律 输入元素和*2^(n-1)
*/

#include <math.h>
#include <stdio.h>

int main() {
  int c;
  int n = 0;
  long long ans = 0;
  while (scanf("%d", &c) != EOF) {
    ans += c;
    n++;
  }
  for (int i = 1; i < n; i++) ans *= 2;
  printf("%lld\n", ans);
  return 0;
}