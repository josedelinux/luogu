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
		int offset =1;
		//adjust offset to skip same value
		if(arr[i + offset] == arr[i] ) {
			offset++;
		}
		if (arr[i + offset] - arr[i] == 1) {
			tmp++;
			ans=max(ans,tmp+1);
		} else {
			tmp=0;
		}
	}


	printf("%d\n", ans);
	return 0;
}
