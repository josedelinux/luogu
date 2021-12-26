/*
N can be Divided by integer 52
so we handle it by week (obvious)
let's go brutal
Vamos brutal

(7*x+21*k)*52==n

since
"and if there are multiple, output the one with the greatest X  and smallest K."
let's loop x over from 100
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	int x,k=1;
	scanf("%d",&n);
	while(1) {
		for(x=100; x>0; x--) {
			if((7*x+21*k)*52==n) {
				printf("%d\n%d\n",x,k);
				return 0;
			}
		}
		//if there are no solution found
		k++;
	}
	return 0;
}
