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

        char tmp[50];
        int ti = 0;  // tmp arr index
        for (int j = a; j < b + a; j++) {
          tmp[ti++] = s[j];
        }
        tmp[ti] = '\0';
        strcpy(s, tmp);
        break;
      case 3:
        // insert
        break;
    }
    printf("%s\n", s);
  }

  return 0;
}