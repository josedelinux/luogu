#include <cctype>
#include <cstdio>

int main() {
  int c;
  int cnt = 0;
  while ((c = getchar()) != EOF) {
    if (isalnum(c)) {
      cnt++;
    }
    if (c == '\n') {
      break;
    }
  }
  printf("%d\n", cnt);
  return 0;
}