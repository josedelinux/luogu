#include <bits/stdc++.h>
#define MAX_N 1000
using namespace std;

struct Student {
  int id;
  int ag;     // academic grades
  int qg;     // quality grades
  double og;  // overall grades
  bool is_excellent(void) {
    if (ag + qg > 140 && og - 80.0 >= 0)
      return true;
    else
      return false;
  }
};
int main() {
  int n;
  cin >> n;
  Student stu[n];
  for (int i = 0; i < n; i++) {
    cin >> stu[i].id;
    cin >> stu[i].ag;
    cin >> stu[i].qg;
    stu[i].og = stu[i].ag * 0.7 + stu[i].qg * 0.3;
    if (stu[i].is_excellent())
      cout << "Excellent" << endl;
    else
      cout << "Not excellent" << endl;
  }
  return 0;
}