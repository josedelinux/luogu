/*
https://www.luogu.com.cn/blog/_post/1643
*/
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int n, k;
int arr[20];

// simplest method
bool isPrime(int n) {
  int end = sqrt((double)n);
  for (int i = 2; i <= end; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

// k_left为剩余的k，sum_ya为前面累加的和，
// start和end为全组合剩下数字的选取范围；
// 调用递归生成全组合，在过程中逐渐把K个数相加，当选取的数个数为0时，直接返回前面的累加和是否为质数即可
int choose(int k_left, int sum_ya, int start, int end) {
  if (k_left == 0) return isPrime(sum_ya);
  int sum = 0;
  for (int i = start; i <= end; i++) {
    sum += choose(k_left - 1, sum_ya + arr[i], i + 1, end);
  }
  return sum;
}

int main() {
#ifdef DEBUG
  for (int i = 0; i <= 111; i++) {
    if (isPrime(i)) printf("%d\n", i);
  }
#endif

  scanf("%d %d", &n, &k);

  for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

  printf("%d\n", choose(k, 0, 0, n - 1));
  return 0;
}