/*
https://www.luogu.com.cn/blog/_post/210994
*/
#include <bits/stdc++.h>
using namespace std;

////Rune[i][j][k]表示第i个数字的第j行的第k列
char Rune[10][5][3] = {{
                           // 0
                           'X',
                           'X',
                           'X',
                           'X',
                           '.',
                           'X',
                           'X',
                           '.',
                           'X',
                           'X',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                       },
                       {
                           // 1
                           '.',
                           '.',
                           'X',
                           '.',
                           '.',
                           'X',
                           '.',
                           '.',
                           'X',
                           '.',
                           '.',
                           'X',
                           '.',
                           '.',
                           'X',
                       },
                       {
                           // 2
                           'X',
                           'X',
                           'X',
                           '.',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                           'X',
                           '.',
                           '.',
                           'X',
                           'X',
                           'X',
                       },
                       {
                           // 3
                           'X',
                           'X',
                           'X',
                           '.',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                           '.',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                       },
                       {
                           // 4
                           'X',
                           '.',
                           'X',
                           'X',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                           '.',
                           '.',
                           'X',
                           '.',
                           '.',
                           'X',
                       },
                       {
                           // 5
                           'X',
                           'X',
                           'X',
                           'X',
                           '.',
                           '.',
                           'X',
                           'X',
                           'X',
                           '.',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                       },
                       {
                           // 6
                           'X',
                           'X',
                           'X',
                           'X',
                           '.',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                       },
                       {
                           // 7
                           'X',
                           'X',
                           'X',
                           '.',
                           '.',
                           'X',
                           '.',
                           '.',
                           'X',
                           '.',
                           '.',
                           'X',
                           '.',
                           '.',
                           'X',
                       },
                       {
                           // 8
                           'X',
                           'X',
                           'X',
                           'X',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                           'X',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                       },
                       {
                           // 9
                           'X',
                           'X',
                           'X',
                           'X',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                           '.',
                           '.',
                           'X',
                           'X',
                           'X',
                           'X',
                       }};

int main() {
  int arr[105];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    char ch;
    scanf(" %c", &ch);  // a space to skip \r\n stuff
    arr[i] = ch - '0';
  }

  for (int i = 0; i < 5; i++) {      //枚举每一行
    for (int j = 0; j < n; j++) {    //枚举每一个数字
      for (int k = 0; k < 3; k++) {  //枚举每个数字的列
        printf("%c", Rune[arr[j]][i][k]);
        // putchar(Rune[arr[j]][i][k]);same effect
      }
      if (j != n - 1) printf(".");
    }
    putchar('\n');
  }
  return 0;
}
