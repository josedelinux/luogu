#include <bits/stdc++.h>
#define AHORA 8

using namespace std;

int
main ()
{
  int h, m, s, v, mdiff, hdiff;
  scanf ("%d%d", &s, &v);

  mdiff = (10 + ceil (s / float (v)));

#ifdef DEBUG
  printf ("Debug:%d minutes\n", mdiff);
#endif

  if (mdiff < 60 * 8)
    {
      // that day exactly
      m = (60 * 25 - mdiff) % 60;
    }
  else if (mdiff == 480)
    {
      printf ("%02d:%02d\n", 0, 0);
      return 0;
    }
  else
    {
      // the day before
      m = (60 * 25 - mdiff) % 60;
    }

  hdiff = (mdiff / 60) + 1;
  // remove negative hours h
  int hvdd = (AHORA - hdiff + 48) % 24;

  printf ("%02d:%02d\n", hvdd, m);
}
