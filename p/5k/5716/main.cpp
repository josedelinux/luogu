#include <bits/stdc++.h>
using namespace std;

int is_leap_year(int y) {
  if (y % 4 == 0) {
    if (y % 100 != 0) {
      return true;
    } else if (y % 400 == 0) {
      return true;
    }
  }
  return false;
}

int main() {
  int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

#ifdef DEBUG
  // g++ -D DEBUG -Wall .\main.cpp
  for (int i = 0; i < 12; i++) {
    printf("%d has %d days.\n", i + 1, a[i]);
  }
#endif

  int year, month;

  scanf("%d%d", &year, &month);
  if (is_leap_year(year)) {
    a[1]++;
    printf("%d\n", a[month - 1]);
    return 0;
  } else {
    printf("%d\n", a[month - 1]);
    return 0;
  }

  return 0;
}
