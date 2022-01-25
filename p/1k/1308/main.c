#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define maxn 1000000

char substr[11];
char str[maxn + 1];

int main() {
  int vez = 0;  // times
  scanf("%s", &substr);

  // hail getline

  int cnt = 0;  // str cnt
  char ch = getchar();
  if (ch != '\n' && ch != '\r') {
    ungetc(ch, stdin);
  }
  ch = getchar();
  if (ch != '\n' && ch != '\r') {
    ungetc(ch, stdin);
  }

  while ((ch = getchar()) != EOF && 1) {
    if (ch == '\n') break;
    str[cnt++] = ch;
  }

  int nsub = strlen(substr);
  for (int i = 0; i < nsub; i++) substr[i] = toupper(substr[i]);

  int nstr = strlen(str);
  for (int i = 0; i < nstr; i++) str[i] = toupper(str[i]);

  // count times
  const char *result = str;

  while ((result = strstr(result, substr)) != NULL && isspace(*(result - 1)) &&
         isspace(*(result + nsub))) {  // hard core judgement
    vez++;
    result++;
    // Increment result, otherwise we'll find target at the same location
  }

  char *pos = strstr(str, substr);
  if (pos && isspace(*(pos - 1)) && isspace(*(pos + nsub))) {
    printf("%d %d\n", vez, pos - str);
  } else {  // NULL
    printf("-1\n");
  }
  return 0;
}