#include <stdio.h>

int stringLength(char name[]);
int main()
{
  char name[20];
  int length;
  printf("enter your name: ");
  gets(name);
  length = stringLength(name);
  printf("length of %s is %d", name, length);
}
int stringLength(char name[])
{
  int i = 0, count = 0;
  while (name[i] != '\0')
  {
    count++;
    i++;
  }
  return count;
  
}