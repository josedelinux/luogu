/*
比上一题简单...
easier than the last one
*/
#include <algorithm>
#include <iomanip>
#include <iostream>
using std::cin, std::cout, std::endl, std::setw, std::next_permutation;

int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main() {
  int n;
  cin >> n;
  do {
    for (int i = 0; i < n; i++) {
      cout << setw(5) << arr[i];
    }
    cout << endl;
  } while (next_permutation(arr, arr + n));

  return 0;
}