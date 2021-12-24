/*
use flags


easier version:

#include<bits/stdc++.h>//头文件
using namespace std;//cin，cout必备的
long long s[11]={},n,k=0,a=1;//数组s,n和转换后的k,再加一个a,作用后面讲
int main()//主程序
{
        memset(s,0,sizeof(n));//清零
        cin>>n;//输入不解释
    for(int i=1;i<=10;i++)
s[i]=n/a%10,a*=10;//求出位数后存入数组，具体的就不说了 a=1000000000;//初始化
    for(int i=1;i<=10;i++) k+=s[i]*a,a/=10;//存入k
    while(k%10==0) k/=10;//倒着看，最后有0就除掉
    cout<<k;//输出不解释
    return 0;//好习惯棒棒哒[恶心][恶心][呕吐][呕吐]
}
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  int sign = 0;  // positive
  scanf("%d", &n);

  if (n == 0) {
    printf("%d\n", 0);
    return 0;
  } else if (n < 0) {
    sign = 1;  // negative
    n = -n;    // make it positive
  }

  int ans[15] = {0};
  int k;  // count of bits

  int ign_bits = 0;  // ignore bits count

  int zc_flag = 1;  // continous zero flag
  // we only handle last continual zero

  // convert n to array(reverse)
  for (k = 0; n > 0; k++) {
    // only handle last continul zero
    int cur = n % 10;
    if (!zc_flag || cur != 0) {
      ans[k - ign_bits] = cur;

      if (cur != 0) {  // end of ignorance
        zc_flag = 0;
      }

    } else {
      // ignore current bits(zero)
      n = n / 10;
      ign_bits++;
      continue;
    }

    n = n / 10;
  }
  if (sign) printf("%c", '-');

  for (int i = 0; i < k - ign_bits; i++) {
    printf("%d", ans[i]);
  }
  printf("\n");
  return 0;
}