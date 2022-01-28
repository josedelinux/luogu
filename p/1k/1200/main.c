#include <stdio.h>
#include <string.h>

#define DEBUGn

int main() {
  char cometa[7] = {0};
  char group[7] = {0};
  int cometa_product = 1;  // max: 11881376
  int group_product = 1;   // max: 11881376

  scanf("%s", &cometa);
  scanf("%s", &group);
  //   gets(cometa);
  //   gets(group);

  for (int i = 0; i < strlen(cometa); i++) {
    // cometa[i] = cometa[i] - 'A' + 1;
    cometa_product *= (cometa[i] - 'A' + 1);
  }
  for (int i = 0; i < strlen(group); i++) {
    // group[i] = group[i] - 'A' + 1;
    group_product *= (group[i] - 'A' + 1);
  }

#ifdef DEBUG
  printf("%d\t%d\n", cometa_product, group_product);
  printf("%d\t%d\n", cometa_product % 47, group_product % 47);
#endif

  if (cometa_product % 47 == group_product % 47) {
    puts("GO");
  } else {
    puts("STAY");
  }
  return 0;
}