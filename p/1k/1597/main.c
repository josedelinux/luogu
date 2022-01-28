/*
https://www.luogu.com.cn/blog/_post/8180
*/
#include <stdio.h>

int v[3];
char s1, s2;
int main() {
  while (scanf("%c:=%c;", &s1, &s2) == 2)  //充分利用c语言优势
    v[s1 - 'a'] =
        s2 >= '0' && s2 <= '9' ? s2 - '0' : v[s2 - 'a'];  //赋值语句简洁明了
  printf("%d %d %d", v[0], v[1], v[2]);
}