#include <stdio.h>

int main()
{
  //string 
  char name1[5] = "john";
  printf("%s \n", name1);
  char name2[5] = {'d', 'o', 'e'};
  printf("%s \n", name2);

  //print input name
  char cityName[5];
  printf("enter city name: ");
  scanf("%s", cityName);
  printf("%s", cityName);
  return 0;
}