#include <algorithm>
#include <iostream>

using namespace std;

int N, M;
int arr[10000 + 1];

int main() {
  cin >> N >> M;
  for (int i = 0; i < N; i++) cin >> arr[i];
  for (int i = 0; i < M; i++) next_permutation(arr, arr + N);
  for (int i = 0; i < N - 1; i++) cout << arr[i] << " ";
  cout << arr[N - 1];
  return 0;
}