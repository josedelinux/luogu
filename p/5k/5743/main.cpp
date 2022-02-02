#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int sum = 0;
  int tmp = 1;
  cin >> n;
  for (int i = 0; i < n - 1; i++) {
    tmp = tmp + 1;
    tmp = tmp * 2;
  }
  cout << tmp << endl;
  return 0;
}