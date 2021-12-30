#include <bits/stdc++.h>
using namespace std;
#define maxn 1005

struct Stu {
	int cn;
	int ma;
	int en;
	inline int getSum(void) {
		return cn+ma+en;
	}
} stu[maxn];

int is_even(struct Stu s1,struct Stu s2)
{
	if((s1.cn-s2.cn)*(s1.cn-s2.cn)<=25&&(s1.ma-s2.ma)*(s1.ma-s2.ma)<=25&&(s1.en-s2.en)*(s1.en-s2.en)<=25) {
		if((s1.getSum()-s2.getSum())*(s1.getSum()-s2.getSum())<=25)
			return 1;
	}
	return 0;
}

int main()
{
	int T=0;
	int ans=0;
	scanf("%d",&T);
	while(T--) {
		scanf("%d %d %d",&stu[T].cn,&stu[T].ma,&stu[T].en);
	}
	printf("%d\n", is_even(stu[1],stu[2]));

	printf("%d\n", ans);

	return 0;
}

