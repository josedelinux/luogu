#include <bits/stdc++.h>
using namespace std;

int
is_leap_year (int y)
{
  if (y % 4 == 0)
    {
      if (y % 100 != 0)
        {
          return true;
        }
      else if (y % 400 == 0)
        {
          return true;
        }
    }
  return false;
}

int
main ()
{
  int year;
  scanf ("%d", &year);
  printf ("%d\n", is_leap_year (year));

  return 0;
}
