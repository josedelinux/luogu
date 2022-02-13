/*
https://www.luogu.com.cn/blog/_post/95205
*/
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int n, k;
int arr[20];
int ans = 0;

// simplest method
bool isPrime(int n) {
  if (n == 0 || n == 1) return false;
  int end = sqrt((double)n);
  for (int i = 2; i <= end; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

// rec：递归英文recursion缩写
// start：开始选数的地方
// count：已经选了几个数
// sum：到目前为止选的数的和
void rec(int start, int count, int sum) {
  int i;
  if (count == k && isPrime(sum)) {
    ans++;
    //如果已经选了k个数，判断和是不是素数
    // ans是符合条件的和的个数
  }

  for (i = start; i <= n; i++) {
    //从开始选数的地方到n
    //每重循环都是一种可能性
    //例如：选第二个数，start=2,n=4,有三种可能性，调用自身3次

    rec(i + 1, count + 1, sum + arr[i - 1]);

    //参数1：从a里面下一个数开始选
    //参数2：已经选的数的个数+1
    //参数3：sum加上这次选的数

    //因为直接从下一个数开始选，所以不可能选到之前选过的数
    //无需判断当前的数是否被选过
  }
}

int main() {
  scanf("%d %d", &n, &k);

  for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

  //从第一个数开始找，已经找了0个数，目前的和是0
  rec(1, 0, 0);

  printf("%d\n", ans);
  return 0;
}