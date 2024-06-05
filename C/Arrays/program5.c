//array element insertion 
#include <stdio.h>
#include <conio.h>

int main()
{
  int arr[50], n, i, j, key, loc;
  printf("Enter size of array: ");
  scanf("%d", &n);
  for(i = 0; i < n; i++)
  {
    printf("Enter %d elements: ", n);
    scanf("%d", &arr[i]);
  }
  printf("enter element to insert: ");
  scanf("%d", &key);
  printf("enter desired location: ");
  scanf("%d", &loc);
  for(i = n - 1; i >= loc; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[loc] = key;
  for(j = 0; j < n; j++)
  {
    printf("elements are: %d \n", arr[j]);
  }
  return 0;
}