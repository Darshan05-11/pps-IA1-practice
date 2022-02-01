#include<stdio.h>
int input(int *a,int *b)
{
  printf("enter two numbers:n/");
  scanf("%d%d",a,b);
}
int add(int a,int b,int*sum)
{
  *sum=a+b;
}
int output(int a,int b,int sum)
{
  printf("sum of a,b is %d+%d=%d",a,b,sum);
}
int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}