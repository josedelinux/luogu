#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  unsigned long long n;
  scanf ("%lld", &n);
  // combination
  // n * (n-1) * (n-2) * (n-3) / 24
  printf ("%lld\n", n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4);

  return 0;
}