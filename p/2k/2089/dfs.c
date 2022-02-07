/*
还有优化
https://www.luogu.com.cn/blog/_post/11224
*/
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define maxn 13

char ans[114514];
int ingrediant[maxn];  // 当前调料
int cnt = 0;           // 方案数

void printans() {
  for (int i = 0; i < 10; i++) {
    sprintf(ans + strlen(ans), "%d ", ingrediant[i]);
  }
  sprintf(ans + strlen(ans), "\n");
}

// 深搜
void dfs(int cur, int left) {
  if (cur == 10 && !left) {
    // 已经搜到第10层，这个时候调料恰好加完
    cnt++;       // 方案数+1
    printans();  // 将方案输出到字符串里面
    return;
  }
  for (ingrediant[cur] = 1; ingrediant[cur] < 3; ingrediant[cur]++) {
    if ((10 - cur - 1) * 3 + ingrediant[cur] < left)
      continue;  // 剪枝。如果剩下的调料都加3克都不够，说明不可能
    if ((10 - cur - 1) + ingrediant[cur] > left)
      break;  // 剪枝。如果剩下的调料都加一克也超量，说明不可能
    dfs(cur + 1, left - ingrediant[cur]);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  if (10 <= n && n <= 30)
    dfs(0, n);  // 如果n不在[10, 30]范围内，说明不可能有解，跳过搜索
  printf("%d\n%s", cnt, ans);  //输出答案

  return 0;
}