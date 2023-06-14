/*
https://www.luogu.com.cn/blog/_post/30673
*/

#include <iostream>
using namespace std;
int n, p[11] = {1}, cnt = 1, m;

void print(int aa) {  //输出方案
  for (int i = 1; i < aa; i++) cout << p[i] << "+";
  cout << p[aa] << endl;
}

void dfs(int a) {                        //通过DFS得到排列， a计数
  for (int i = p[a - 1]; i <= m; i++) {  //回溯后跳出分支
    if (i == n) continue;                //防止最后一行输出n
    p[a] = i;
    m -= i;
    if (m == 0)
      print(a);  // m减完时，该方案已排列完毕，进行输出
    else
      dfs(a + 1);  //否则继续搜索
    m += i;        //回溯
  }
}

int main() {
  cin >> n;
  m = n;
  dfs(1);
  return 0;
}