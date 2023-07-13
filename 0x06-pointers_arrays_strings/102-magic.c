#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;

  *(p + 4) = 98; // Accessing and modifying a[2] through pointer arithmetic

  printf("a[2] = %d\n", a[2]);
  return 0;
}
