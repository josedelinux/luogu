#include <bits/stdc++.h>
#define maxn 51
using namespace std;

unsigned long long facArr[maxn];

int main() {
  int sum = 0;
  int n;
  scanf("%d", &n);

  facArr[0] = 1;
  facArr[1] = 1;

  // generate all the factors
  for (int i = 2; i <= maxn; i++) {
    facArr[i] = i * facArr[i - 1];
  }

  printf("%d", sum);

  return 0;
}