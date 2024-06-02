//arrays has garbage value when not initialize in local scope
#include <stdio.h>
int main()
{
  int arr[5];
  for(int i = 0; i < 5; i++)
  {
    printf("%d\n", arr[i]);
    printf("%d\n", &arr[i]);
  }
}