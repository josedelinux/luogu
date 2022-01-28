
#include <stdio.h>
#include <string.h>

#define DEBUGn

int main() {
  char cmd[256] = {0};

  int t[4] = {0};  // value or variable
  int ti = 0;

  scanf("%s", &cmd);

  const char* pdest;
  pdest = cmd;
  int pos;

  while ((pdest = strchr(pdest, '=')) != NULL) {
    pos = (int)(pdest - cmd);
    t[ti++] = cmd[pos + 1];
    pdest++;  // otherwise we'll find target at the same location
  }

  int v[4] = {0};

  for (int i = 0; i < 3; i++) {
    if (t[i] >= '0' && t[i] <= '9') {
      v[i] = t[i];
    } else if (t[i] == 'a') {
      v[i] = v[0];
    } else if (t[i] == 'b') {
      v[i] = v[1];
    } else if (t[i] == 'c') {
      v[i] = v[2];
    }
    // v[i] = t[i];
  }

  printf("%c %c %c\n", v[0] == 0 ? '0' : v[0], v[1] == 0 ? '0' : v[1],
         v[2] == 0 ? '0' : v[2]);
  return 0;
}