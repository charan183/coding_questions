#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a,b;
  printf("enter two numbers");
  scanf("%d", &a);
  scanf("%d", &b);
  printf("%d", a);
  printf("%d", b);
  printf("\n");
  a=a+b;
  b=a-b;
  a=a-b;
  printf("%d", a);
  printf("%d", b);
}