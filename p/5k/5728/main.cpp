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
	if(abs(s1.cn-s2.cn)<=5&&abs(s1.ma-s2.ma)<=5&&abs(s1.en-s2.en)<=5&&abs(s1.getSum()-s2.getSum())<=10)
		return 1;
	else
		return 0;
}

int main()
{
	int T=0;
	int ans=0;
	scanf("%d",&T);
	for(int i=0; i<T; i++) {
		scanf("%d %d %d",&stu[i].cn,&stu[i].ma,&stu[i].en);
	}
	for(int i=0; i<T; i++)
		for(int j=i+1; j<T; j++) {
#ifdef DEBUG
			printf("cmp:%d %d\n",i,j);
#endif
			ans= ans+is_even(stu[i],stu[j]);
		}

	printf("%d\n", ans);
	return 0;
}

