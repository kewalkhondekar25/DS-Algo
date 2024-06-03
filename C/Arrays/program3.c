#include <stdio.h>

int main()
{
  //declaration
  int arr1[5];
  //base address
  for(int i = 0; i < 5; i++)
  {
    printf("%d\n", &arr1[i]);
  }
  //array values
  int arr2[5] = {10, 20, 30, 40, 50};
  for(int j = 0; j < 5; j++)
  {
    printf("%d\n", arr2[j]);
  }
}