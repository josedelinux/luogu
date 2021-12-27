/*
3n+1 problem
Collatz conjecture
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int arr[1000]= {0};
	int n;
	int k=0;
	scanf("%d",&n);

	while(n>1) {
		//printf("%d ",n);
		arr[k]=n;
		if(n%2==0)
			n=n/2;
		else
			n=3*n+1;
		k++;
	}
	arr[k] = 1;

	for(;k>=0;k--) printf("%d ",arr[k]);

	return 0;
}
