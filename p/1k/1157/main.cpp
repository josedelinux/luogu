/*
I wrote it my self
hail brute force
*/
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int arr[20] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
                 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int n, r;
  cin >> n >> r;
  string last;
  do {
    bool skip = false;
    // check if the latter is greater than before, if so, skip
    for (int i = 0; i < r - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        skip = true;
      }
    }

    if (!skip && 1) {
      for (int i = 0; i < r; i++) {
        cout << "  " << arr[i];
      }
      cout << endl;
    }

  } while (next_permutation(arr, arr + n));

  return 0;
}
