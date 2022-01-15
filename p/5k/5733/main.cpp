#include <bits/stdc++.h>

using namespace std;

int main() {
  char str[105];
  scanf("%s", str);
  int n = strlen(str);
  for (int i = 0; i < n; i++) {
    if (isalpha(str[i])) {
      putchar(toupper(str[i]));
    } else {
      putchar(str[i]);
    }
  }
  putchar('\n');
  return 0;
}