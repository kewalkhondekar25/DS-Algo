#include <stdio.h>

void main()
{
  char name[20];
  printf("enter your name: ");
  gets(name);
  printf("hello %s", name);
}