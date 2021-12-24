#include<bits/stdc++.h>
#define infty 1000000

using namespace std;

int main()
{
	int n=0;
	int ans=0;
	int max = -infty;
	int min = infty;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		int tmp=0;
		scanf("%d",&tmp);
		if(tmp>max) max=tmp;
		if(tmp<min) min =tmp;
	}
	ans =max -min;
	printf("%d",ans);
	return 0;
}
