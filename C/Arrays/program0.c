#include <stdio.h>
#include <conio.h>

int main()
{
  //declaration
  int arr0[5];
  
  //print garbage values
  for(int a = 0; a < 5; a++)
  {
    printf("%d\n", arr0[a]);
  }

  //print base address
  int arr1[5];
  for(int i = 0; i < 5; i++)
  {
    printf("%d\n", &arr1[i]);
  }

  //print array values
  int arr2[5] = {10, 20, 30, 40, 50};
  for(int j = 0; j < 5; j++)
  {
    printf("%d\n", arr2[j]);
  }

  //put values inside array
  int arr3[5];
  for(int k = 0; k < 5; k++)
  {
    printf("enter a value: ");
    scanf("%d", &arr3[k]);
  }
  for(int l = 0; l < 5; l++)
  {
    printf("%d\n", arr3[l]);
  }

  
}