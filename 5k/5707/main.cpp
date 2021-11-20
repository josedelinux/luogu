#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  int h, m, s, v;
  scanf ("%d%d", &s, &v);

  // debug
  // printf ("%d\n", ceil (s / float (v)));

  // int mdiff = (m2 + 120 - m1) % 60;
  int mdiff = (10 + ceil (s / float (v)));
  m = (120 - mdiff) % 60;
  int hdiff = (mdiff / 60) + 1;
  h = 8;
  printf ("%02d:%02d\n", h - hdiff, m);
}
