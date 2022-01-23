/*
to tell if b and c are identical
for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
     if(b[i][j]!=c[i][j])
     return 0;
     return 1;

https://www.luogu.com.cn/blog/157767/solution-p1205
*/
#include <bits/stdc++.h>
#define maxn 100
using namespace std;

/*input*/
int n;
char o[maxn + 1][maxn + 1];  // original
char t[maxn + 1][maxn + 1];  // transformed

char tmp[maxn + 1][maxn + 1];  // tmp

// the first transfomation
bool ts1() {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) tmp[j][n - i + 1] = o[i][j];
  }
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      if (tmp[i][j] != t[i][j]) return false;
  return true;
}

bool ts2() {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) tmp[n - i + 1][n - j + 1] = o[i][j];
  }
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      if (tmp[i][j] != t[i][j]) return false;
  return true;
}

bool ts3() {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) tmp[n - j + 1][i] = o[i][j];
  }
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      if (tmp[i][j] != t[i][j]) return false;
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