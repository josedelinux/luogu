/*
https://www.luogu.com.cn/blog/_post/103618
*/
#include<bits/stdc++.h>
using namespace std;
int n,s=0;
int main()
{
    cin>>n;
    while(n) s=s*10+n%10,n/=10;//如果n不是0，就一直s让一位，腾个0出来，n最后一位跟上去，再无情地抛弃了最后一位（突然想对n说：你无情你冷酷你无理取闹！）
    cout<<s;
    return 0;
}