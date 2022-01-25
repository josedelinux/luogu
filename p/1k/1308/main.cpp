#include <iostream>
using namespace std;

int main() {
  string substr;
  string str;

  char* pos = NULL;  // first location
  int vez = 0;       // times

  // hail getline
  getline(cin, substr);
  getline(cin, str);

  for (int i = 0; i < substr.length(); i++) substr[i] = toupper(substr[i]);
  for (int i = 0; i < str.length(); i++) str[i] = toupper(str[i]);

  substr = ' ' + substr + ' ';
  str = ' ' + str + ' ';  // keep the count same since substr added

  int first = str.find(substr);

  if (first == string::npos) {
    cout << -1 << endl;
  } else {
    int cnt = 0;
    int tmp = first;
    while (tmp != string::npos) {
      cnt++;
      tmp = str.find(substr, tmp + 1);
    }
    cout << cnt << " " << first << endl;
  }

  return 0;
}