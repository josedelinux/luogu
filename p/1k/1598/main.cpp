#include <bits/stdc++.h>
#define REDIn

#define DEBUGn
#ifdef DEBUG
#define REDI
#endif

#define MAXROW 400

using namespace std;

map<char, int> m;

char histogram[MAXROW + 1][26];  // extra 1 for '\0'

int main() {
#ifdef REDI
  freopen("input.txt", "r", stdin);
#endif

  int cnt = 0;
  char ch;
  while (cin >> ch) {
    m[ch]++;
    cnt++;
  }
  // find max row
  int maxrow = 0;
  for (int i = 0; i < 26; i++) {
    maxrow = max(m[i + 'A'], maxrow);
  }

#ifdef DEBUG
  // print counts
  for (int i = 0; i < 26; i++) {
    cout << m[i + 'A'] << " ";
  }
  cout << endl;
#endif

  // write to histogram
  for (int row = MAXROW; cnt > 0 && row >= MAXROW - maxrow; row--) {
    for (int col = 0; cnt > 0 && col < 26; col++) {
      if (m[col + 'A'] != 0) {
        histogram[row][col] = '*';
        m[col + 'A']--;
        cnt--;
      } else {
        histogram[row][col] = ' ';
      }
    }
  }

  // print histogram
  for (int row = MAXROW - maxrow + 1; row <= MAXROW; row++) {
    for (int col = 0; col < 26; col++) {
      if (histogram[row][col] == '*') {
        printf("* ");
      } else if (histogram[row][col] == ' ') {
        printf("  ");
      }
    }
    putchar('\n');
  }

#ifdef DEBUG
  // print counts
  for (int i = 0; i < 26; i++) {
    cout << m[i + 'A'] << " ";
  }
  cout << endl;
#endif

  puts("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
  return 0;
}