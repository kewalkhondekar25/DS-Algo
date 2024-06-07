#include <stdio.h>
#include <string.h>

void main()
{
  char name[20];
  printf("enter your name: ");
  gets(name);
  printf("hello %s \n", name);

  char userName[20];
  unsigned int len;
  printf("enter user name: ");
  gets(userName);
  len = strlen(userName);
  printf("length of %s is %d", userName, len);
}