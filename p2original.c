#include<stdio.h>
int input()
{
  int a;
  printf("enter a number/n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
    return a;
  else if((b>a)&&(b>c))
    return b;
  else
    return c;
}
int output(int largest)
{
  printf("biggest numbers is %d\n",largest);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(largest);
  return 0;
}