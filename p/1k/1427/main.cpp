#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[105] = {0};
	int k = 0;
	do {//avoid use do while loop, esp when you are not familiar with it
		scanf("%d", &a[k]);
		if (a[k] == '0' || a[k] == '\0') break;
		k++;
	} while (1);

	for (int i = k - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	putchar('\n');
	return 0;
}
