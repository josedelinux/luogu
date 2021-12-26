/*
It's Known to all the factors to a number comes in pairs
for example 21:
1,21 3,7
thus all we need to do is to find the smallest one to divide the number
*/

#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n;
	int ans=0;
	scanf("%d",&n);

	//yes use sqrt here!!!
	for(int i=2; i<sqrt(n); i++) {
		if(n%i==0) {
			ans= n/i;
			break;
		}
	}

	printf("%d\n",ans);
	return 0;
}
