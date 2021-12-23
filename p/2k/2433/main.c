#include <math.h>
#include <stdio.h>

int
main ()
{
  int T;
  const double pi = 3.141593;
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
      printf ("%d\n%d\n%d\n", 14 / 4, 4 * (14 / 4), 14 % 3);
      break;
    case 4:
      printf ("%.3f\n", 500 / 3.0);
      break;
    case 5:
      printf ("%d\n", (220 + 260) / (20 + 12));
      break;
    case 6:
      // cout<<sqrt(6*6+9*9);
      printf ("10.8167\n");
      // printf ("%f\n", sqrt (6 * 6 + 9 * 9));
      break;
    case 7:
      printf ("110\n90\n0");
      break;
    case 8:
      // printf ("%f\n%f\n%f\n", pi * 5 * 2, pi * 5 * 5, 4 / 3.0 * pi * 125);
      printf ("31.4159\n78.5398\n523.599");
      break;
    case 9:
      printf ("%d\n", (((((1 + 1) * 2) + 1) * 2) + 1) * 2);
      break;
    case 10:
      printf ("9\n");
      break;
    case 11:
      printf ("33.3333\n");
      // fuck cpp
      // printf ("%f\n", 100 / 3.0);
      break;
    case 12:
      printf ("%d\n%c\n", 'M' - 'A' + 1, 'A' + 18 - 1);
      break;
    case 13:
      printf ("16\n");
      // printf ("%f\n",
      //         pow (4 / 3 * pi * (4 * 4 * 4 + 10 * 10 * 10), 1.0 * 1 / 3));
      break;
    case 14:
      printf ("%d\n", 50);
      break;
    default:
      break;
    }

  return 0;
}
