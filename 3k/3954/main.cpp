#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, result;
  scanf("%d %d %d", &a, &b, &c);
  result = a * 20 / 100 + b * 30 / 100 + c * 50 / 100;
  printf("%d\n", result);
  return 0;
}