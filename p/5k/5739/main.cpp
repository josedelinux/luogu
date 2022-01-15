#include <bits/stdc++.h>

using namespace std;

long long memo[13];

long long factorial(int n) {
  if (memo[n]) return memo[n];
  if (n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%lld\n", factorial(n));
  return 0;
}