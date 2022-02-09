#include <iostream>
#include <iomanip>
using std::cout, std::cin, std::setw, std::endl;

int n, r;
int arr[20 + 1];

//搜索第k个数
void dfs(int k) {
	if (k > r) {//最后层
		for (int i = 0; i <= r; i++) {
			cout << setw(3) << arr[i];
		}
		cout << endl;
		return;//回到前一层
	}
	for (int i = arr[k - 1] + 1; i <= n; i++) {
		arr[k] = i;
		dfs(k + 1); //直接进行下一次调用
	}
}

int main() {
	cin >> n >> r;
	dfs(1);
	return 0;
}
