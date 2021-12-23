#include <bits/stdc++.h>
using namespace std;

//好久没写类了,熟悉下
struct Plan {
  int amout;
  int price;
  int total = 0;
  int get_least_total(int n) {
    int result = ceil(float(n) / amout);
    return result * price;
  }
};

int smallest(int x, int y, int z) {
  return x < y ? (x < z ? x : z) : (y < z ? y : z);
}

int main() {
  int n, ans;

  Plan a, b, c;
  scanf("%d", &n);

  scanf("%d%d", &a.amout, &a.price);
  scanf("%d%d", &b.amout, &b.price);
  scanf("%d%d", &c.amout, &c.price);

  //什么?为了好看点
  a.total = a.get_least_total(n);
  b.total = b.get_least_total(n);
  c.total = c.get_least_total(n);

  // find minimum
  ans = smallest(a.total, b.total, c.total);

  printf("%d\n", ans);
  return 0;
}