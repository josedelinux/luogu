#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	double ans[50] = {0};
	ans[0] = 0;
	ans[1] = 1;
	ans[2] = 1;
	scanf("%d", &n);
	for (int i = 3; i <= n; i++) {
		ans[i] = ans[i - 1] + ans[i - 2];
	}
	printf("%.2lf\n", ans[n]);
	return 0;
}
