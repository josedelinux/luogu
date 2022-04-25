#include <stdio.h>

#define MAX_N (200000 + 7)
#define MAX(a, b) ((a) > (b) ? (a) : (b))

/*
在线处理，即时处理
*/

int n, a[MAX_N];
int maxNegative = -114514;  //特判全都是负数时,挑选最大的负数

int realTimeProcess(int A[], int N) {
  int ThisSum, MaxSum;

  int i;
  ThisSum = MaxSum = 0;
  for (i = 0; i < N; i++) {
    if (A[i] < 0) maxNegative = MAX(maxNegative, A[i]);
    ThisSum += A[i];       //向右累加
    if (ThisSum > MaxSum)  //发现更大和则更新当前结果
      MaxSum = ThisSum;
    else if (ThisSum < 0)  //如果当前和小于0，则清零
      ThisSum = 0;
  }
  return MaxSum;
}

int main() {
  // freopen("P1115_2.in", "r", stdin);
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("%d\n",
         realTimeProcess(a, n) == 0 ? maxNegative : realTimeProcess(a, n));
  return 0;
}
