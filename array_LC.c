#include <stdio.h>
void main()
{
  int count = 0, index = 0, i, j, b[10] = {0}, sum = 0;;
  int a[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  int fi = a[0];
  for (i = 1; i < 10; i++)
  {
    if (fi == a[i])
    {
      count++; 
      fi = a[i];
    }
    else
    {
      index++;
      fi = a[i];
      count = 0;
    }
    b[index] = count + 1;
  }
  for (i = 0; i < 10; i++)
  {
    printf("%d\t", b[i]);
  }
  printf("\nunique element is %d\n", index);
  
  for (i = 0; i < 5; i++)
  {
    a[i] = a[sum + b[i] - 1];
    sum = sum + b[i];
  }
  for (i = 0; i < 10; i++)
  {
    printf("%d\t", a[i]);
  }
}

