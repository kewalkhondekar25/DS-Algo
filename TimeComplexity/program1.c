//find the time complexity of the func1 function

#include <stdio.h>

void func1(int array[], int length)//O(length)
{
  int sum = 0;//O(1)
  int product = 1;//O(1)

  for(int i = 0; i < length; i++)
  {
    sum += array[i];//O(1)
  }

  for(int j = 0; j < length; j++)
  {
    product *= array[j];//O(1)
  }

  printf("sum: %d\n", sum);
  printf("product: %d\n", product);
}

int main()
{
  int arr[] = {3, 5, 66};
  func1(arr, 3);
  return 0;
}

//solution
/*
f1 = k1;
f2 = k2;
f3 = k3;

tn = f1 + f2 + f3;
tn = k1 + k2n + k3n;
tn = n(k2 + k3);
tn = k4n;
O(n);
O(length)
*/