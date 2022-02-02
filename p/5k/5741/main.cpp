#include <bits/stdc++.h>
#define DEBUG
#define MAX_N 1000

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

  void Dump() {
    printf("%s %d %d %d\n", this->Name, this->Chinese, this->Math,
           this->English);
  }
};

bool is_even(struct Stu s1, struct Stu s2) {
  if (abs(s1.Chinese - s2.Chinese) <= 5 && abs(s1.Math - s2.Math) <= 5 &&
      abs(s1.English - s2.English) <= 5 && abs(s1.Sum - s2.Sum) <= 10)
    return true;
  else
    return false;
}

int main() {
  int n;
  scanf("%d", &n);
  Stu stu[n];

  for (int i = 0; i < n; i++) {
    stu[i].getData();
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (is_even(stu[i], stu[j])) {
        if (stu[i].Name > stu[j].Name)
          printf("%s %s\n", stu[i].Name, stu[j].Name);
        else
          printf("%s %s\n", stu[j].Name, stu[i].Name);
      }
    }
  }

  return 0;
}