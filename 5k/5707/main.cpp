#include <bits/stdc++.h>

using namespace std;

int
myceil (float num)
{
  int a = num;
  if ((float)a != num)
    return num + 1;
  return num;
}

int
main ()
{
  int h, m, s, v;
  scanf ("%d%d", &s, &v);

  // int mdiff = (m2 + 120 - m1) % 60;
  int mdiff = (10 + myceil (s / v));
  m = (120 - mdiff) % 60;
  int hdiff = (mdiff / 60) + 1;
  h = 8;
  printf ("%02d:%02d\n", h - hdiff, mdiff);
}
