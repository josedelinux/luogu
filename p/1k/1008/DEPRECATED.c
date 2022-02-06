/*
无法证明数学判断条件,不推荐
https://www.luogu.com.cn/blog/_post/969
*/
#include <stdio.h>

int main() {
  int a, b, c;
  // 123 for it's the smallest number
  // 333 for c = 3*333 =999 the biggest number
  for (a = 123; a <= 333; a++) {
    b = a * 2;
    c = a * 3;
    /*
    2个集合内所有数相加相乘结果一样，2个集合的内容一样(出去一)
    */
    if ((a / 100 + a / 10 % 10 + a % 10 + b / 100 + b / 10 % 10 + b % 10 +
             c / 100 + c / 10 % 10 + c % 10 ==
         1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9) &&
        ((a / 100) * (a / 10 % 10) * (a % 10) * (b / 100) * (b / 10 % 10) *
             (b % 10) * (c / 100) * (c / 10 % 10) * (c % 10) ==
         (1) * (2) * (3) * (4) * (5) * (6) * (7) * (8) * (9))) {
      printf("%d %d %d\n", a, b, c);
    }
  }
  return 0;
}