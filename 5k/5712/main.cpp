#include <bits/stdc++.h>
using namespace std;

int
main ()
{

  int num;
  char msg[40];

  scanf ("%d", &num);
  sprintf (msg, "Today, I ate %d apple%s", num, num > 1 ? "s." : ".");
  printf ("%s\n", msg);

  return 0;
}
