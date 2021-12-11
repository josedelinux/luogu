#include <bits/stdc++.h>
using namespace std;

int getGCD(int a, int b) {
  if (a % b == 0) {
    return b;
  } else {
    return getGCD(b, a % b);
  }
}

int main() {
  int a, b, c;
  // opposite over hypotenuse
  int ans_numerator, ans_denominator;
  scanf("%d%d%d", &a, &b, &c);
  ans_denominator = max(max(a, b), c);
  ans_numerator = min(min(a, b), c);
  int gcd = getGCD(ans_numerator, ans_denominator);
  printf("%d/%d\n", ans_numerator / gcd, ans_denominator / gcd);
  return 0;
}