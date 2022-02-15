/*
https://www.luogu.com.cn/blog/_post/3829
非常快
*/

#include <stdio.h>

int n;
int cost[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int arr[2001] = {6};

int main() {
  int ans = 0;
  scanf("%d", &n);
  for (int i = 1; i <= 2000; i++) {
    int j = i;
    while (j >= 1)  //求每个数所用的火柴棒
    {
      arr[i] = arr[i] + cost[j % 10];
      j = j / 10;
    }
  }
  for (int i = 0; i <= 1000; i++) {
    for (int j = 0; j <= 1000; j++)
      if (arr[i] + arr[j] + arr[i + j] + 4 == n) ans++;  //还有加号与等号
  }
  printf("%d\n", ans);
  return 0;
}