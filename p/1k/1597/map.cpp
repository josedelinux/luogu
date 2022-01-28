#include <bits/stdc++.h>

std::map<char, int> m;
std::string str;

int main() {
  std::cin >> str;
  int n = str.length();
  m['a'] = m['b'] = m['c'] = '0';
  for (int i = 0; i < n; i += 5) {
    if (str[i + 3] >= '0' && str[i + 3] <= '9') {
      m[str[i]] = str[i + 3];
    } else {
      m[str[i]] = m[str[i + 3]];
    }
  }
  std::cout << (char)m['a'] << " " << (char)m['b'] << " " << (char)m['c']
            << std::endl;
  return 0;
}