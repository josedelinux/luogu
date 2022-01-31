#include <bits/stdc++.h>
#define DEBUGn

using namespace std;

struct Stu {
  char Name[8 + 1];
  int Chinese;
  int Math;
  int English;
  int Sum = 0;

  void getData() {
    scanf("%s", &this->Name);
    scanf("%d", &this->Chinese);
    scanf("%d", &this->Math);
    scanf("%d", &this->English);
    getSum();
  }

  void getSum() { Sum = this->Chinese + this->Math + this->English; }

  void Dump() {
    printf("%s %d %d %d\n", this->Name, this->Chinese, this->Math,
           this->English);

#ifdef DEBUG
    printf("sum: %d\n", Sum);
#endif
  }
};

int main() {
  int maxn = -1;
  int n;
  scanf("%d", &n);
  Stu stu[n];

  for (int i = 0; i < n; i++) {
    stu[i].getData();
  }

  int index;  // max score student
  for (int i = 0; i < n; i++) {
    if (stu[i].Sum > maxn) {
      maxn = stu[i].Sum;
      index = i;
    }
  }
  stu[index].Dump();

#ifdef DEBUG
  for (int i = 0; i < n; i++) {
    stu[i].Dump();
  }
  printf("size: %d\n", sizeof(Stu));
#endif

  return 0;
}