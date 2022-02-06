/*
https://www.luogu.com.cn/blog/_post/982
*/

#include <stdbool.h>
#include <stdio.h>

bool used[10];

int main() {
  for (int i = 123; i < 333; i++) {
    memset(used, 0, sizeof(used));
    int v = 0;  //清零
    used[i % 10] = used[i / 10 % 10] = used[i / 100] = used[i * 2 % 10] =
        used[i * 2 / 10 % 10] = used[i * 2 / 100] = used[i * 3 % 10] =
            used[i * 3 / 10 % 10] = used[i * 3 / 100] = 1;  //统计数字
    for (int j = 1; j <= 9; j++) v += used[j];
    if (v == 9) printf("%d %d %d\n", i, i * 2, i * 3);  //如果齐了就输出
  }
  return 0;
}