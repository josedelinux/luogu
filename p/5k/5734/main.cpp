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
    scanf("%d", &k);
    switch (k) {
      case 1:
        // catenate to the end
        scanf("%s", &str);
        strcat(s, str);
        break;
      case 2:
        // cut b letter from pos a
        int a, b;
        scanf("%d %d", &a, &b);
        for (int j = a; j < b + a; j++) {
          putchar(s[j]);
        }
        continue;
      case 3:
        // insert
        break;
    }
    printf("%s\n", s);
  }

  return 0;
}