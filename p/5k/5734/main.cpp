#include <cstdio>
#include <cstring>

int main() {
  int n;
  char s[101];
  char str[101];
  int k;  // command

  scanf("%d", &n);
  scanf("%s", &s);
  for (int i = 0; i < n; i++) {
    scanf("%d %s", &k, &str);
    switch (k) {
      case 1:
        // copy
        strcat(s, str);
        break;
      case 2:
        // cut b letter from pos a

        break;
      default:
        break;
    }
    printf("%s\n", s);
  }

  return 0;
}