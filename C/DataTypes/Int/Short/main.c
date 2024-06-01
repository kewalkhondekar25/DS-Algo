#include <stdio.h>
#include <conio.h>

int main()
{
  short x = 32769;
  unsigned short y = -4;
  printf("%d\n", x);//-32767
  printf("%u\n", y);//35532
  return 0;
}