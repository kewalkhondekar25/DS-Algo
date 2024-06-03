#include <stdio.h>

int main()
{
  //sum of elements of arrays
  int arr1[5] = {10, 20, 30, 40, 50};
  int i, sum = 0;
  for(i = 0; i < 5; i++)
  {
    sum += arr1[i];
  }
  printf("%d\n", sum);

  //find largest element in an array
  int arr2[7] = {7, 13, 21, 6, 9, 31, 24};
  int j, large = arr2[0];
  for(j = 1; j < 7; j++)
  {
    if(arr2[j] > large)
    {
      large = arr2[j];
    }
  }
  printf("%d\n", large);
  return 0;
}