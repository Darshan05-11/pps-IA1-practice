#include<stdio.h>
int input()
{
  int n;
  printf("enter a number.:");
  scanf("%d",&n);
  return n;
}
float my_sqrt(int n)
{
  double start,end,mid;
  start=0,end=n;
  while((end-start)>=0.000001)
    {
      mid=(start+end)/2;
      if(mid*mid<n)
        start=mid;
      
      if(mid*mid>=n)
        end=mid;
    }
  return mid;
}
void output(float sqrt_result)
{
  printf("sq root is %f",sqrt_result);
}
int main()
{
  int n;
  float a;
  a=input();
  int b=my_sqrt(a);
  output(b);
  return 0;
}