#include <stdio.h>
#define maxn 100000010

int is_prime(int n) {
  int i;
  for (i = 2; i < n; i++) {
    if (n % i == 0) break;
  }
  if (i == n)
    return 1;
  else
    return 0;
}

int is_palindrome(int n) {
  int y = n, num = 0;
  while (y != 0) {
    num = num * 10 + y % 10;
    y /= 10;
  }
  if (num == n) return 1;
  return 0;
}

// int ans[maxn];

int main() {
  int a, b;

  //打表不是这样打的。。。。
  // for (int i = 1; i < maxn; i++) {
  //   if (is_palindrome(i) && is_prime(i)) {
  //     ans[i] = 1;
  //   }
  // }

  scanf("%d%d", &a, &b);

  // for (int i = a; i < b; i++) {
  //   // if (is_palindrome(i)) printf("%d is palindrome\n", i);
  //   // if (is_prime(i)) printf("%d is prime\n", i);
  //   if (ans[i]) printf("%d\n", i);
  // }

  for (int i = a; i < b; i++) {
    if (is_palindrome(i) && is_prime(i)) {
      printf("%d\n", i);
    }
  }

  return 0;
}