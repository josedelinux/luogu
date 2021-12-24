#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	int ans = 0;
	int arr[1010] = {0};

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);

	int tmp=0;
	for (int i = 0; i < n; i++) {

		if (arr[i + 1] - arr[i] == 1) {
			tmp++;
			if (tmp > ans) ans = tmp;
		} else {
			tmp=0;
		}
	}


	printf("%d\n", ans+1);
	return 0;
}
