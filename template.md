<h1 style="color:blue;text-align:center;">我的算法模板</h1>

| Name      | Tag   | Applications | Importance |      |
| --------- | ----- | ------------ | ---------- | ---- |
| 1艾氏筛法 | prime |              |            |      |
| 2GCD      | GCD   | 约分         |            |      |
|           |       |              |            |      |
|           |       |              |            |      |
|           |       |              |            |      |
|           |       |              |            |      |
|           |       |              |            |      |
|           |       |              |            |      |
|           |       |              |            |      |
|           |       |              |            |      |
|           |       |              |            |      |
|           |       |              |            |      |
|           |       |              |            |      |
|           |       |              |            |      |

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
int GCD(int a, int b) {
  if (a % b == 0) {
    return b;
  } else {
    return GCD(b, a % b);
  }
}
```

---

