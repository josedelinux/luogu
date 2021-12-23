#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  int arr[4] = {a, b, c, 0};
  sort(arr, arr + 3);

  if (arr[0] + arr[1] <= arr[2]) {
    printf("Not triangle\n");
    return 0;
  }
  if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
    printf("Right triangle\n");
  } else if (arr[0] * arr[0] + arr[1] * arr[1] > arr[2] * arr[2])
    printf("Acute triangle\n");
  else if (arr[0] * arr[0] + arr[1] * arr[1] < arr[2] * arr[2])
    printf("Obtuse triangle\n");
  if (a == b || b == c || c == a) {
    printf("Isosceles triangle\n");
  }
  if (a == b && b == c) {
    printf("Equilateral triangle\n");
  }
  return 0;
}