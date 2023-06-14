/*
思路thinking
欲由4根木棒组成一个正三角形，则必有 2根长度相等。
且另外2根长度之和，等于 前2根相等的木棒 的长度。
*/
#include <iostream>

using namespace std;

int n;
int arr[5005];
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
}