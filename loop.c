#include <stdio.h>
int main()
{
  int i = 2, n;
  scanf("%d", &n);
  printf("the even number is written here:\n");

  while (i <= n)
  {
    printf("%d\n", i);
    i = i + 2;
    
  }
  

  return 0;
}