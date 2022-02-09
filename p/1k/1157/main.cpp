/*
I wrote it my self
hail brute force
slow as fuck
O(n!) max: 20!
*/
#include <algorithm>
#include <cstdio>
#include <cstring>

const int maxn = 100;

int main() {
  //不要这样去写，会生成全排列O(n!)。应该用0和1生成排列.见tony123456.cpp
  int arr[20] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
                 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int n, r;

  char last[maxn] = "";

  scanf("%d %d", &n, &r);

  do {
    bool skip = false;
    // check if the latter is greater than before, if so, skip
    for (int i = 0; !skip && i < r - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        skip = true;
      }
    }

    char cur[maxn] = "";
    char* pcur = cur;
    int offset = 0;
    if (!skip && 1) {
      for (int i = 0; i < r; i++) {
        sprintf(pcur, "%3d%n", arr[i], &offset);
        pcur += offset;
      }
    }

    if (strcmp(cur, last) != 0 && strcmp(cur, "") != 0) {
      puts(cur);
    }

    strcpy(last, cur);

  } while (std::next_permutation(arr, arr + n));

  return 0;
}
