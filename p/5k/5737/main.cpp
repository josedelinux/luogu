#include <bits/stdc++.h>

using namespace std;

bool is_leap_year(int y) {
  if (y % 4 == 0) {
    if (y % 100 != 0)
      return true;
    else if (y % 400 == 0)
      return true;
  }
  return false;
}

int leap_year[400];
int main() {
  int a, b;
  cin >> a;
  cin >> b;
  int cnt = 0;
  for (int i = a; i <= b; i++) {
    if (is_leap_year(i)) {
      leap_year[cnt++] = i;
    }
  }
  printf("%d\n", cnt);

  for (int i = 0; i < cnt; i++) {
    printf("%d ", leap_year[i]);
  }

  return 0;
}