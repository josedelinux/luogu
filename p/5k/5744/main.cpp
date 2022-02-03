#include <bits/stdc++.h>
using namespace std;

struct Student {
  char Name[20];
  int age;
  int score;
};

int main() {
  int N;
  cin >> N;
  Student s[N];
  for (int i = 0; i < N; i++) {
    cin >> s[i].Name;
    cin >> s[i].age;
    cin >> s[i].score;
  }
  for (int i = 0; i < N; i++) {
    cout << s[i].Name << " ";
    cout << ++s[i].age << " ";

    if (s[i].score * 1.2 > 600) {
      cout << 600;
    } else {
      cout << (int)s[i].score * 1.2;
    }

    cout << endl;
  }

  return 0;
}