//find the time complexity of the func1 function

#include <stdio.h>

void func(int n)
{
  int sum = 0;
  int product = 1;

  for(int i = 0; i < n; i++)//0 to n
  {
    for(int j = 0; j < n; j++)//0 to n
    {
      printf("%d, %d\n", i, j);
    }
  }
}

int main()
{
  func(4);
  return 0;
}

//solution
/*
k1, k2
[n + n + n + ... + (n -1)n] * k2;
nk2 * (n)
n^2 k2
O(n^2)
*/