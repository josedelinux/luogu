#include <bits/stdc++.h>
using namespace std;

int main() {
  char s[14];

  // check digits
  int given, m_check = 0;

  scanf("%c-%c%c%c-%c%c%c%c%c-%c", &s[1], &s[2], &s[3], &s[4], &s[5], &s[6],
        &s[7], &s[8], &s[9], &given);

  for (int i = 1; i <= 9; i++) {
    m_check = m_check + i * (s[i] - '0');
  }
  m_check = m_check % 11;
  if (m_check == given - '0') {
    printf("Right\n");
    return 0;
  } else {
    printf("%c-%c%c%c-%c%c%c%c%c-%d\n", s[1], s[2], s[3], s[4], s[5], s[6],
           s[7], s[8], s[9], m_check);
    return 0;
  }

  return 0;
}