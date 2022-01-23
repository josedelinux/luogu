/*
to tell if b and c are identical
for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return false;
     return true;

https://www.luogu.com.cn/blog/157767/solution-p1205
*/
#include <bits/stdc++.h>
#define maxn 100
#define DEBUG
using namespace std;

/*input*/
int n;
char o[maxn + 1][maxn + 1];  // original
char t[maxn + 1][maxn + 1];  // transformed

char tmp[maxn + 1][maxn + 1];  // tmp

// the first transfomation
bool ts1(void) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) tmp[j][n - i + 1] = o[i][j];
  }
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      if (tmp[i][j] != t[i][j]) return false;
  return true;
}

bool ts2(void) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) tmp[n - i + 1][n - j + 1] = o[i][j];
  }
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      if (tmp[i][j] != t[i][j]) return false;
  return true;
}

bool ts3(void) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) tmp[n - j + 1][i] = o[i][j];
  }
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      if (tmp[i][j] != t[i][j]) return false;
  return true;
}

bool ts4(void) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) tmp[i][n - j + 1] = o[i][j];
  }
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      if (tmp[i][j] != t[i][j]) return false;
  return true;
}

// combo
bool ts5(void) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) tmp[i][n - j + 1] = o[i][j];
  }
  // copy it as input
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) o[i][j] = tmp[i][j];
  }

  if (ts1() || ts2() || ts3()) {
    return true;
  }
  return false;
}

// identical
bool ts6(void) {
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      if (o[i][j] != t[i][j]) return false;
  return true;
}

void select() {
  if (ts1()) {
    cout << 1 << endl;
    return;
  }
  if (ts2()) {
    cout << 2 << endl;
    return;
  }
  if (ts3()) {
    cout << 3 << endl;
    return;
  }
  if (ts4()) {
    cout << 4 << endl;
    return;
  }
  if (ts5()) {
    cout << 5 << endl;
    return;
  }
  if (ts6()) {
    cout << 6 << endl;
    return;
  }

  // default
  cout << 7 << endl;
  return;
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++) cin >> o[i][j];
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++) cin >> t[i][j];

  select();
  return 0;
}