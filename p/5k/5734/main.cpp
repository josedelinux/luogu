#include <cstdio>
#include <cstring>

int n;
char s[101];
char str[101];
int k;  // command

int main() {
  scanf("%d", &n);
  scanf("%s", &s);
  for (int i = 0; i <= n; i++) {
    scanf("%d %s", &k, &str);
    switch (k) {
      case 1:
        // copy
        strcat(s, str);
        break;
      default:
        break;
    }
    printf("%s", s);
  }

  return 0;
}