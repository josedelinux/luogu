/*
N can be Divided by integer 52
so we handle it by week
let's go brutal
Vamos brutal

(7*x+21*k)*52==n
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	int x,k;
	scanf("%d",&n);
	while(1) {
		for(x=100; x>0; x--) {
			if((7*x+21*k)*52==n) {
				printf("%d\n%d\n",x,k);
				return 0;
			}
		}
		k++;
	}
	return 0;
}
