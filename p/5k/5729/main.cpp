#include <bits/stdc++.h>
using namespace std;
#define maxn 1005


int main()
{
	int w,x,h;
	int q;
	scanf("%d%d%d",&w,&x,&h);
	int ans = w*x*h;
	scanf("%d",&q);
	while(q--) {
		int x1,y1,z1;
		int x2,y2,z2;
		scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
		int deduction= (abs(x1-x2) +1)*(abs(y1-y2) +1)*(abs(z1-z2) +1);
		ans=ans -deduction;
	}
	printf("%d\n", ans);
	return 0;
}

