/*
https://oi-wiki.org/math/combinatorics/cantor/

https://www.dcode.fr/cantor-expansion
*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_N 10005

unsigned long long memo[20];

int arr[MAX_N];

long long fact(int n) {
  if (n == 0) return 1;
  if (memo[n]) return memo[n];
  return n * fact(n - 1);
}

//求长度为n的字符串某种排列的哈希值
int canto_expand(int* s, int n) {
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int d = 0;
    for (int j = 0; j < i; j++)
      if (s[j] > s[i]) d++;  //求s[i]与其前面的字符组成的逆序对个数
    ans += d * fact(i);
  }
  return ans;
}

void canto_shrink(int n) {}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  for (int i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("%d\n", permutation_hash(arr, MAX_N));

  for (int i = 1; i <= n; i++) {
    printf("%d ", arr[i] + 1);
  }

  return 0;
}