#include <bits/stdc++.h>

int main() {
  int ans[8] = {0};  // 0 to 7
  int winNum[7] = {0};
  int n;
  scanf("%d", &n);
  scanf("%d %d %d %d %d %d %d", &winNum[0], &winNum[1], &winNum[2], &winNum[3],
        &winNum[4], &winNum[5], &winNum[6]);

  while (n--) {
    int kmatch = 0;  // match counts
    int cur[7] = {0};
    scanf("%d %d %d %d %d %d %d", &cur[0], &cur[1], &cur[2], &cur[3], &cur[4],
          &cur[5], &cur[6]);

    for (int i = 0; i <= 6; i++)    // each  winning number
      for (int j = 0; j <= 6; j++)  // each  current number
        if (cur[j] == winNum[i]) {
          kmatch++;
        }

    ans[kmatch] += 1;
  }

  printf("%d %d %d %d %d %d %d", ans[7], ans[6], ans[5], ans[4], ans[3], ans[2],
         ans[1]);
  return 0;
}