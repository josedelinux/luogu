#include <bits/stdc++.h>

using namespace std;

int main() {
  int i;
  float o = 0.0;
  scanf("%d", &i);
  if (i <= 150) {
    o += 0.4463 * i;
  } else if (i > 150 && i <= 400) {
    o += 0.4463 * 150;
    o += (i - 150) * 0.4663;
  } else if (i > 400) {
    o += 0.4463 * 150;
    o += 0.4663 * (400 - 150);
    o += (i - 400) * 0.5663;
  }
  printf("%.1f\n", o);
  return 0;
}