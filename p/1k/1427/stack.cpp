#include<bits/stdc++.h>
#include<stack>

using namespace std;


stack<int> a;
int k;

int main()
{
	while(cin>>k) a.push(k);
	a.pop();//use Ctrl+Z to debug. Not robust 
	while(!a.empty()) cout<<a.top()<<" ",a.pop();
	return 0;
}
