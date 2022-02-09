#include <iostream>
#include <iomanip>
using std::cout, std::cin, std::setw, std::endl;

int n, r;
int arr[20 + 1];

//������k����
void dfs(int k) {
	if (k > r) {//����
		for (int i = 0; i <= r; i++) {
			cout << setw(3) << arr[i];
		}
		cout << endl;
		return;//�ص�ǰһ��
	}
	for (int i = arr[k - 1] + 1; i <= n; i++) {
		arr[k] = i;
		dfs(k + 1); //ֱ�ӽ�����һ�ε���
	}
}

int main() {
	cin >> n >> r;
	dfs(1);
	return 0;
}
