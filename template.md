<h1 style="color:blue;text-align:center;">我的算法模板</h1>

| Name      | Tag          | Applications | Importance |      |
| --------- | ------------ | ------------ | ---------- | ---- |
| 1艾氏筛法 | prime        |              |            |      |
| 2GCD      | GCD,LCM      | 约分         |            |      |
| 3闰年判断 | is_leap_year |              |            |      |
| 4快速幂   | fast_pow     |              |            |      |
|           |              |              |            |      |
|           |              |              |            |      |
|           |              |              |            |      |
|           |              |              |            |      |
|           |              |              |            |      |
|           |              |              |            |      |
|           |              |              |            |      |
|           |              |              |            |      |
|           |              |              |            |      |
|           |              |              |            |      |

---

### 1 艾氏筛法(sieve of Eratosthenes)



```c++
bool is_prime[MAX_N];  

void primeGen(int n) {
  memset(is_prime, 1, sizeof(is_prime));
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= n; i++) {
    if (is_prime[i]) {
      for (int j = 2 * i; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }
}
```

---

### 2 GCD(Euclidean algorithm)

#### Applications: 约分(reduction of a fraction)

```c++
#include <numeric>
std::gcd
```



```c++
//b!=0
int GCD(int a, int b) {
  if (a % b == 0) {
    return b;
  } else {
    return GCD(b, a % b);
  }
}

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

inline int lcm(int a,int b){
    return a / gcd(a,b) *b; //avoid overflow
}
```

---
### 4快速幂
```c++
LL fast_power(LL a,LL k,int q){
	LL ans=1;
	while(k){
		if(k&1) ans = ans * a % q;
		k>>1;
		a= a * a % q;
	}
	return ans;
}
```


---

### 3 is_leap_year

```c++
int is_leap_year(int y) {
  if (y % 4 == 0) {
    if (y % 100 != 0) {
      return true;
    } else if (y % 400 == 0) {
      return true;
    }
  }
  return false;
}
```

```c++
int is_leap_year(int y) {
	return ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0));
}
```

---

### 4快速幂

```
// C++ Version
long long binpow(long long a, long long b) {
  if (b == 0) return 1;
  long long res = binpow(a, b / 2);
  if (b % 2)
    return res * res * a;
  else
    return res * res;
}
```

---

