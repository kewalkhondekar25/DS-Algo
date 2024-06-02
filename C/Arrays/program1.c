#include <stdio.h>
#include <conio.h>

int main()
{
  //declaration
  // int arr[5] = {1, 2, 3, 4, 69};
  int arr[5];
  for(int i = 0; i < 5; i++)
  {
    printf("enter numbers: ");
    scanf("%d", &arr[i]);
  }
  for(int j = 0; j < 5; j++)
  {
    printf("%d\n", arr[j]);
  }
}