/*
https://www.luogu.com.cn/blog/_post/71942
利用康托展开的原理，简化而来的代码
*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_N 10005

int arr[MAX_N];
bool used[MAX_N];

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
    int x = arr[i];                                  // x为变进制数的值
    for (int j = 1; j <= arr[i]; j++) x -= used[j];  //获取剩余可选的值
    used[arr[i]] = true;                             //标记当前位
    arr[i] = x - 1;                                  //保存值(从零开始)
  }

  //加上m
  arr[n] += m;
  //修正当前变进制数
  for (int i = n; i > 0; i--) {
    arr[i - 1] += arr[i] / (n - i + 1);  //进位
    arr[i] %= n - i + 1;                 //当前位
  }

  //复用used 数组
  memset(used, 0, sizeof(used));

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= arr[i]; j++)
      if (used[j]) arr[i]++;  //偏移
    printf("%d ", arr[i] + 1);
    used[arr[i]] = true;
  }

  return 0;
}