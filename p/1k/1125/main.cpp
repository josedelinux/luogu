/*
we can print out table here
*/
#include <bits/stdc++.h>
#define MAX_N 101
#define infty 1000000

#define DEBUGn

using namespace std;

map<char, int> m;
bool prime[MAX_N];

// generate prime up to R[ange]
void PrimeGen(int r) {
  memset(prime, 1, sizeof(prime));
  prime[0] = prime[1] = false;
  for (int i = 2; i <= r; i++) {
    if (prime[i]) {
      for (int j = 2 * i; j < r; j = j + i) {
        prime[j] = false;
      }
    }
  }
}

int main() {
  // we can print out table here and store it into array
  PrimeGen(MAX_N);

#ifdef DEBUG
  for (int i = 0; i <= MAX_N; i++) {
    if (prime[i]) {
      printf("%d\n", i);
    }
  }
#endif

  int maxn = -infty;
  int minn = infty;

  char a[101];
  scanf("%s", &a);
  int n = strlen(a);
  for (int i = 0; i < n; i++) {
    m[a[i]]++;
  }

  for (int i = 0; i < n; i++) {
    maxn = max(maxn, m[a[i]]);
    minn = min(minn, m[a[i]]);
  }
  int diff = maxn - minn;
  if (prime[diff]) {
    puts("Lucky Word");
    printf("%d\n", diff);
  } else {
    puts("No Answer");
    puts("0");
  }
  return 0;
}