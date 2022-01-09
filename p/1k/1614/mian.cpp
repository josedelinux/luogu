#include <bits/stdc++.h>

#define infty 100000
using namespace std;

int arr[3005];

int main() {
  int n, m;
  int min = infty;
  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 1; i < n; i++) {
    int sum = arr[i - 1] + arr[i] + arr[i + 1];
    if (sum < min) min = sum;
  }
  printf("%d\n", min);
}