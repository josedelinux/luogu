#include <bits/stdc++.h>
#define MAX_N 100000

using namespace std;

bool is_prime[MAX_N];  // boolean array

void primeGen(int n) {
  memset(is_prime, 1, sizeof(is_prime));
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= n; i++) {
    if (is_prime[i]) {
      for (int j = 2 * i; j <= n; j += i) {
        is_prime[j] = false;
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