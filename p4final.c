#include<stdio.h>
int input()
{
  int n;
  printf("enter the size of the array\n");
  scanf("%d",&n);
  return n;
}
void array(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      printf("enter the elements");
      scanf("%d",&a[i]);
    }
}
int add(int n,int a[n])
{
  int sum=0,i;
  for(i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
  return sum;
}
int output(int n,int a[n],int sum)
{
  int i;
  for(i=0;i<n-1;i++)
    {
      printf("%d+",a[i]);
    }
    printf("%d=%d",a[n-1],sum);
}
int main()
{
  int n,sum;
  n=input();
  int a[n];
  array(n,a);
  sum=add(n,a);
  output(n,a,sum);
  return 0;
}
