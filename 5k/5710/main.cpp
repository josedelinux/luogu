#include <bits/stdc++.h>
using namespace std;

inline int
is_even (int x)
{
  return !(x % 2);
}

inline int
ligit (int x)
{
  return (x > 4 && x <= 12 && 1);
}

int
main ()
{
  // property
  int x;
  scanf ("%d", &x);
  printf ("%d %d %d %d\n", is_even (x) && ligit (x), is_even (x) || ligit (x),
          is_even (x) ^ ligit (x), !is_even (x) && !ligit (x));
}
