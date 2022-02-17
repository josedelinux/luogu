#include <algorithm>
#include <iostream>

using namespace std;

int arr[2000000 + 1];
int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= m; i++) cin >> arr[i];
  sort(arr + 1, arr + 1 + m);
  for (int i = 1; i <= m; i++) cout << arr[i] << " ";
  cout << endl;
  return 0;
}