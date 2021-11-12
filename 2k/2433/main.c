#include <math.h>
#include <stdio.h>

int
main ()
{
  int T;
  const double pi = acos (-1);
  scanf ("%d", &T);

  switch (T)
    {
    case 1:
      printf ("I love Luogu!\n");
      break;
    case 2:
      printf ("%d %d\n", 2 + 4, 10 - 2 - 4);
      break;
    case 3:
      printf ("%d\n%d\n%d\n", 14 / 4, 14 - 14 / 4);
      break;
    case 4:
      printf ("%3f\n", 500 / 3.0);
      break;
    case 5:
      printf ("%d\n", (220 + 260) / (20 + 12));
      break;
    case 6:
      // cout<<sqrt(6*6+9*9);
      printf ("10.8167\n");
    case 7:
      printf ("110\n90\n0");
      break;
    case 8:
      printf ("%f\n%f\n%f\n", pi * 5 * 2, pi * 5 * 5, 4 / 3.0 * pi * 125);
      break;
    case 9:
      printf ("%d\n", ((((1 + 1) * 2) + 1 * 2) + 1) * 2);
    default:
      break;
    }

  return 0;
}
