#include <bits/stdc++.h>
#define DEBUGn
#define MAX_N 10000

using namespace std;

unsigned char Prime[MAX_N + 1];

void PrimeGen(int n) {
  memset(Prime, 1, sizeof(Prime));

  Prime[0] = Prime[1] = 0;

  for (int i = 2; i <= n; i++)
    if (Prime[i])
      for (int j = i + i; j <= n; j += i) Prime[j] = 0;
}

void PrintEqu(int n) {
  cout << n << "=";
  for (int i = 2; i < n; i++) {
    if (Prime[i] && Prime[n - i]) {
      cout << i << "+" << n - i << endl;
      break;
    }
  }
}

int main() {
  int N;
  cin >> N;
  PrimeGen(N);

#ifdef DEBUG
  for (int i = 0; i < N; i += 1)
    if (Prime[i]) cout << i << endl;
#endif

  for (int stepper = 4; stepper <= N; stepper += 2) {
    PrintEqu(stepper);
  }
  return 0;
}