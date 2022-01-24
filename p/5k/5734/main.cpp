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
        // use block here to avoid 'crosses initialization'
        // seriously, use 'if' as much as possibile, it looks better
        {
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
        }

        break;
      case 3: {
        // insert after the ath letter
        // most nasty
        int a;
        char tmp[100] = {0};
        char get[50];
        scanf("%d %s", &a, &get);

        strncpy(tmp, s, a);
        strcat(tmp, get);
        strcat(tmp, s + a);
        strcpy(s, tmp);
      }
      case 4:
        char tmp[100];
        scanf("%s", &tmp);
        char *pos = strstr(s, tmp);
        if (pos == NULL) {
          printf("-1\n");
        } else {
          printf("%d\n", pos - s);
        }
        continue;
    }
    printf("%s\n", s);
  }

  return 0;
}