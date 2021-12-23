#include <bits/stdc++.h>
using namespace std;

int
main ()
{
  //体重 身高
  double m, n, o;
  cin >> m >> n;
  o = m / (n * n);
  if (o < 18.5)
    {
      printf ("Underweight\n");
      return 0;
    }
  else if (18.5 <= o && o < 24)
    {
      printf ("Normal\n");
      return 0;
    }
  else if (o >= 24)
    {
      cout << o << endl;
      printf ("Overweight\n");
      return 0;
    }

  return 0;
}
