#include <math.h>
#include <stdio.h>
#include <string.h>
#define maxn 100000010

// instead of bool
// we only need 0 or 1
char ans[maxn];

// simplest, slow as fuck
int is_prime_deprecated(int n) {
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

// sieve of Eratosthenes
void primeGen(int b) {
  //初始化，默认全部都是质数
  memset(ans, 1, sizeof(ans));
  ans[0] = ans[1] = 0;
  int n = sqrt(b);

  for (int i = 2; i <= n; i++) {
    if (ans[i]) {
      //质数的倍数绝对不是质数，把所有质数的倍数全部设为0
      for (int j = 2; j <= b / i; j++) {
        ans[i * j] = 0;  // i*j<=b
      }
    }
  }
}

int main() {
  int a, b;
  scanf("%d%d", &a, &b);

  // b<=10000000这个判断条件来自：除了11以外，一个数的位数是偶数的话，不可能为回文数素数。
  // 如果一个回文素数的位数是偶数，则它的奇数位上的数字和与偶数位上的数字和必然相等；
  // 根据数的整除性理论，容易判断这样的数肯定能被11整除，所以它就不可能是素数。
  if (b >= 10000000) b = 9999999;
  primeGen(b);
  if (a > b) return -1;
  for (int i = a; i <= b; i++) {
    if (ans[i] && is_palindrome(i)) {
      printf("%d\n", i);
    }
  }

  return 0;
}