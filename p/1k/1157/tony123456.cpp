/*
https://www.luogu.com.cn/blog/_post/74778
*/

#include <algorithm>
#include <cstdio>

int arr[30];  // arr[i]代表第i选或不选，0代表选，1代表不选

int main() {
  int n, r;
  scanf("%d%d", &n, &r);
  for (int i = r + 1; i <= n; i++) arr[i] = 1;  //赋初始值
  do {
    for (int i = 1; i <= n; ++i)
      if (arr[i] == 0) printf("%3d", i);  //如果是0就输出，注意三个常宽
    printf("\n");                         //换行
  } while (std::next_permutation(arr + 1, arr + n + 1));  //生成下一个
  return 0;                                               //返回
}