/*http://poj.org/problem?id=3253*/
#include <stdio.h>
#define maxn 20000
#define swap(a, b) ((a) ^= (b) ^= (a) ^= (b))
typedef long long ll;

int N, L[maxn + 2];

void solve() {
  ll ans = 0;
  //ֱ�������ľ��Ϊ1��Ϊֹ
  while (N > 1) {
    //�����̵İ�mii1�ʹζ̵İ�mii2
    int mii1 = 0;
    int mii2 = 1;
    if (L[mii1] > L[mii2]) swap(mii1, mii2);

    for (int i = 2; i < N; i++) {
      if (L[i] < L[mii1]) {
        mii2 = mii1;
        mii1 = i;
      } else if (L[i] < L[mii2]) {
        mii2 = i;
      }
    }

    //�������ƴ��
    int t = L[mii1] + L[mii2];
    ans += t;

    if (mii2 == N - 1) swap(mii1, mii2);
    L[mii1] = t;
    L[mii2] = L[N - 1];
    N--;
  }
  printf("%lld\n", ans);
}

int main() {
  /* test data */
  // N = 3;
  // L[0] = 8;
  // L[1] = 5;
  // L[2] = 8;
  /* test data */

  scanf("%d", &N);
  for (int i = 0; i < N; i++) scanf("%d", &L[i]);

  solve();
  return 0;
}
