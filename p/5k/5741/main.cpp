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

  int getSum() { return Sum = this->Chinese + this->Math + this->English; }

  bool is_even(struct Stu s1, struct Stu s2) {
    if (abs(s1.Chinese - s2.Chinese) <= 5 && abs(s1.Math - s2.Math) <= 5 &&
        abs(s1.English - s2.English) <= 5 && abs(s1.Sum - s2.Sum) <= 10)
      return true;
    else
      return false;
  }

  void Dump() {
    printf("%s %d %d %d\n", this->Name, this->Chinese, this->Math,
           this->English);
  }
};

int Mathin() {
  int Mathxn = -1;
  int n;
  scanf("%d", &n);
  Stu stu[n];

  for (int i = 0; i < n; i++) {
    stu[i].getData();
  }

  int index;  // Mathx score student
  for (int i = 0; i < n; i++) {
    if (stu[i].Sum > Mathxn) {
      Mathxn = stu[i].Sum;
      index = i;
    }
  }
  stu[index].Dump();

  return 0;
}