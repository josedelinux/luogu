/*
muy parecido a
https://www.luogu.com.cn/problem/P5721
jaja

tips
printf("%02d\n", 2);
*/

#include <bits/stdc++.h>
using namespace std;

#define space "  "

inline void prtSpc(int n) {
  for (int i = 0; i < n; i++) printf(space);
}

int main() {
  int n;
  int k = 1;  // count
  scanf("%d", &n);

  /*test */
  //	printf("test start");
  //	prtSpc(2);
  //	printf("test end\n");

  /* print the rectangular */
  int prdct = n * n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%02d", k++);
    }
    putchar('\n');
    if (k > prdct) break;
  }

  putchar('\n');
  k = 1;
  /* print the Triangle  */
  int end = (n + n * n) / 2;
  int lk = 1;  // line count
  
  for (int i = 0; i < n; i++) {
    prtSpc(n - i - 1);
    for (int j = 0; j < lk; j++) {
      printf("%02d", k++);
      if (k > end) return 0;
    }
    lk++;
    putchar('\n');
  }

  return 0;
}
