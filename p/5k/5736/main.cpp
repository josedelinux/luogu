#include <bits/stdc++.h>
#define MAX_N 100000

using namespace std;

char is_prime[MAX_N + 1];  // boolean array

void primeGen(int n) {
  memset(is_prime, 1, sizeof(is_prime));
  is_prime[0] = is_prime[1] = 0;
  for (int i = 2; i <= n; i++) {
    if (is_prime[i]) {
      for (int j = 2 * i; j <= n; j += i) {
        is_prime[j] = 0;
      }
    }
  }
}
int main() {
  int n;
  int arr[101] = {0};
  int maxn = -10000;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    maxn = max(maxn, arr[i]);
  }
  primeGen(maxn);
  for (int i = 0; i < n; i++) {
    if (is_prime[arr[i]]) {
      printf("%d ", arr[i]);
    }
  }
  putchar('\n');
  return 0;
}