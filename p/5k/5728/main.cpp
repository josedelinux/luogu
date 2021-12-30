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
	inline void dump() {
		printf("%d %d %d\n",cn,ma,en);
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
	for(int i=0; i<T; i++) {
		scanf("%d %d %d",&stu[T].cn,&stu[T].ma,&stu[T].en);
	}
	for(int i=0; i<T; i++)
		for(int j=i; j<T; j++)
			printf("cmp:%d %d\n",i,j);
	//ans= ans+is_even(stu[i],stu[j]);

	printf("%d\n", ans);
	return 0;
}

